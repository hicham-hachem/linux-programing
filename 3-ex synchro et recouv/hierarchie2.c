#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
int pid1,pid2;

printf("je suis le pere, mon pid est %d\n", getpid());
pid1=fork();

if(!pid1)//fils1
{
	printf("je suis le fils1, mon pid est %d, mon pere est %d\n", getpid(),getppid());
	//creation du fils2
	pid2=fork();
	if (pid2==0)
	{
	printf("je suis le fils2, mon pid est %d, mon pere est %d\n", getpid(),getppid());
	exit(2);
	}
	wait();
	exit(1);
}
else if(pid1)//pere
{
printf("je suis le pere, mon pid est %d\n", getpid());
wait();
}
	
}
