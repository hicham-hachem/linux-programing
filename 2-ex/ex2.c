#include <stdio.h>
#include <unistd.h>

void main()
{
int x=5;
int ret;
printf("Hello, I am the parent, my pid is %d\n", getpid());
ret=fork();

if(ret==0)//child
{
x=x+1;
printf("I am the child, my pid is %d and my parent is %d\n", getpid(), getppid());
printf("I am the child, fork result is %d\n", ret );
printf("I am the child, x=%d\n", x);
}

else if(ret>0)//parent
{

printf("I am the parent, my pid is %d and my parent is %d\n", getpid(), getppid());
printf("I am the parent, my child id is %d\n", ret );
printf("I am the parent, x=%d\n", x);
//sleep(10);
while(1);
}
}