#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
printf("I am the father, mypid is %d\n",getpid());
int ret;
ret=fork();

//cas du fils
if (ret==0)
{
printf("I am the child, my pid is %d, my parent id is %d\n",getpid(), getppid());
exit(0);

}

//cas du pere
else if(ret>0)
{
printf("hello again, I am the parent, my pid is %d, my child id is %d\n",getpid(),ret);
wait();
}

else printf ("error creating a child\n");

}
