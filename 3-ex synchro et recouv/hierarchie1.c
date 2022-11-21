#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
int pid1,pid2;

printf("pere 1er msg:je suis le pere, mon pid est %d\n", getpid());
pid1=fork();

if(!pid1)//fils1
{
printf("je suis le fils1, mon pid est %d, mon pere est %d\n", getpid(),getppid());
exit(0);
}
else if(pid1)//pere
{
	pid2=fork();
	if (pid2>0)
	{
	printf("je suis le pere, mon pid est %d\n", getpid());
	wait();
	}
	else if (pid2==0)
	{
	printf("je suis le fils2, mon pid est %d, mon pere est %d\n", getpid(),getppid());
	exit(1);
	}
	wait();
}

}
