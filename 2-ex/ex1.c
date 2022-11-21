#include <stdio.h>
#include <unistd.h>

void main()
{
printf("Hello everyone\n");
printf("my pid is %d and my parent id is %d\n", getpid(), getppid());
while(1)
{
printf("Hello\n");
}
}