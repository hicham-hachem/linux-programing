#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void hand(int sig)
{
printf("answer is not receieved\n");
exit(0);
}
void main()
{
int response;
signal (SIGALRM, hand);
printf("How old are you?");
alarm(5);
scanf("%d", &response);
alarm(0);
printf("answer received\n");

}
