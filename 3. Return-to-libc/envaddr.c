#include <stdio.h>

int main(){
	char *shell = (char *) getenv("MYSHELL");

	if(shell)
		printf(" %x \n", (unsigned int)shell);

	return 1;
}
