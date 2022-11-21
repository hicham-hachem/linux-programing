#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

void main()
{
int pid;
pid=fork();

//erreur de fork
if (pid<0)
{
	printf("erreur fork\n");
	exit(1);
}

//chez le pere
else if (pid)
{
int status;
if (waitpid(pid,&status,0)==-1)
{
	printf("erreur waitpid\n");
}
else 
{
printf("je suis le pere, le code exit de mon fils est %d\n", WEXITSTATUS(status));
}
}

//chez le fils
else 
{
printf("je suis le fils, mon pid est %d\n", getpid());
sleep(10);
exit(9);
}


}
