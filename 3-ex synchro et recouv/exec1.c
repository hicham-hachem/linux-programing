#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
	int ret;
	printf("pere 1er msg:je suis le pere, mon pid est %d\n", getpid());
	ret=fork();
	if(ret==0)
	{
		printf("je suis le fils, mon pid est %d, mon pere est %d\n",getpid(), getppid());
		printf("Ana felel byeeeee\n");
		execlp("/bin/ls","ls","-l",NULL);
		printf("I AM BACK !!!\n");
	}
	else if(ret>0)
	{
		printf("pere 2eme msg:je suis le pere %d, mon fils est %d\n", getpid(),ret);
	}


}
