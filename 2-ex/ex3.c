#include <stdio.h>
#include <unistd.h>

void main()
{
int x=5;

fork();
fork();
fork();

printf("My pid is %d  and my parent id is %d: my x = %d\n",getpid(), getppid(), x);
while(1);
}