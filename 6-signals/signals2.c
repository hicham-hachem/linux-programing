#include <stdio.h>
#include <signal.h>

void main()
{
signal(SIGINT,SIG_IGN); /* tell the O/S to ignore the signal */
printf("You cannot kill me...\n");
while (1)
  {
  printf("LOOOL...\n");
  sleep(1);
  }
}

