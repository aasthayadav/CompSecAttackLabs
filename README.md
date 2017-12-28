# SEED Attack Labs

These attack labs cover some of the most common vulnerabilties in general software. They show how attacks work in exploiting these vulnerabilities.

## Table of Contents

- [Installation and Setup](#install)
- [Motivation](#motivation)
- [List of Attacks](#attacks)
- [Key Learnings](#learning)
- [References](#references)

## Installation and Setup

Step 1: Create a new VM in Virtual Box. <br>
Step 2: Download the image SEEDUbuntu-16.04-32bit.zip from [here](http://jupiter.syr.edu/seed/images/16_04_v3/SEEDUbuntu-16.04-32bit.zip). <br>
Step 3: Use the Virtual Machine Hard Disk file to setup your VM. <br>
Step 4: Configure the VM. <br>

## Motivation

The labs were completed as a part of the coursework in Computer Security (CSE643) at Syracuse University. The course is well structured to understand the concepts of Computer Security. <br>

## List of Attacks

1. **Environment Variable and Set-UID Vulnerability**<br>
Description: Understanding how environment variables affect the behavior of Set-UID programs, which are usually privileged programs.

2. **Buffer Overflow Vulnerability**<br>
Description: The task is to develop a scheme to exploit the buffer overflow vulnerability and finally gain the root privilege.

3. **Return-to-libc attack**<br>
Description: There exists a variant of buffer-overflow attack called the return-to-libc attack, which does not need an executable stack; it does not even use 
shell code. Instead, it causes the vulnerable program to jump to some existing code, such as the system() function in the libc library, 
which is already loaded into the memory. The task is to develop a return-to-libc attack to exploit the vulnerability and finally to 
gain the root privilege.

4. **Shellshock Attack**<br>
Description: In this attack we launched the shellshoch attack on a remote web server and then gained the reverse shell by exploiting the vulnerability.

5. **Race Condition Vulnerability**<br>
Description: A race condition occurs when multiple processes access and manipulate the same data concurrently, and the outcome of the
execution depends on the particular order in which the access takes place. If a privileged program has a
race-condition vulnerability, attackers can run a parallel process to “race” against the privileged program,
with an intention to change the behaviors of the program. The task is to exploit the vulnerability and gan root privilege.

6. **Dirty COW Attack**<br>
Description: A case of Race condition vulnerability which affected Linux-based operating systems and Android. We launch this attack to modify /etc/passwd file.

7. **Format String Vulnerability**<br>
Description: The format-string vulnerability
is caused by code like printf(user input), where the contents of variable of user input
is provided by users. When this program is running with privileges (e.g., Set-UID program), this printf
statement becomes dangerous, because it can lead to one of the following consequences: (1) crash the
program, (2) read from an arbitrary memory place, and (3) modify the values of in an arbitrary memory
place. The last consequence is very dangerous because it can allow users to modify internal variables of a
privileged program, and thus change the behavior of the program. The task is to develop
a scheme to exploit the vulnerability.

8. **Cross Site Request Forgery Attack**<br>
Description: In this lab, we will be attacking a social networking web application using the CSRF attack. The
open-source social networking application called Elgg has countermeasures against CSRF, but we have
turned them off for the purpose of this lab.

9. **Cross Site Scripting Attack**<br>
Description: In this lab, we need to exploit
this vulnerability to launch an XSS attack on the modified Elgg, in a way that is similar to what Samy
Kamkar did to MySpace in 2005 through the notorious Samy worm. The ultimate goal of this attack is to
spread an XSS worm among the users, such that whoever views an infected user profile will be infected, and
whoever is infected will add you (i.e., the attacker) to his/her friend list.

10. **SQL injection Attack**<br>
Description: In this lab, we have created a web application that is vulnerable to the SQL injection attack. Our web
application includes the common mistakes made by many web developers. Our goal is to find ways to
exploit the SQL injection vulnerabilities, demonstrate the damage that can be achieved by the attack, and
master the techniques that can help defend against such type of attacks.

11. **Android Repackaging Attack**<br>
Description: Repackaging attack is a very common type of attacks on Android devices. In such an attack, attackers
modify a popular app downloaded from app markets, reverse engineer the app, add some malicious payloads,
and then upload the modified app to app markets. Users can be easily fooled, because it is hard to notice
the difference between the modified app and the original app. Once the modified apps are installed, the
malicious code inside can conduct attacks, usually in the background. We gain hands-on experience on the Android Repackaging attack.

12. **Android Device Rooting Attack**<br>
Description: The objective of this lab is two-fold. First, through this lab, we will get familiar with the process
of device rooting and understand why certain steps are needed. Many people can root Android devices, but
not many people fully understand why things have to be done in a particular way. Second, the entire rooting
mechanism involves many pieces of knowledge about the Android system and operating system in general,
so it serves as a great vehicle for students to gain such in-depth system knowledge. In this lab, we will ask
students to develop a complete rooting package from scratch, and demonstrate how to use the package to
root the Android VM provided by us.




## Key Learnings

- These attack labs gives us the idea of fundamental principles of computer system security, including authentication, access control,
capability, security policies, sandbox, software vulnerabilities, and web security.

- Identifying the vulnerabilities and exploit them. Further work on countermeasures as a security solution to the problem.

```
References

1. http://www.cis.syr.edu/~wedu/Teaching/CompSec/labs.html
2. Computer Security: A Hands-on Approach by Wenliang Du 
```






