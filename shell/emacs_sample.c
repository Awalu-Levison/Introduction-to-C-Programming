#include <unistd.h>
#include <stdio.h>
/*
main - Basics of a shell in C programming
Return: Something
*/
int main(void)
{
  printf("Geting pid of a process\n");
  pid_t mypid;

  mypid = getpid();
  printf("Child pid is : %u\n", mypid);

  mypid = getppid();
  printf("The parent ID (PPID) is :%u\n", mypid);

  return (0);
}
