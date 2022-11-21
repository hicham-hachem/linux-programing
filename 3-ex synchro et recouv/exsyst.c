
/* system() can be used to combine the effects of fork(), exec() and wait() */

#include <stdio.h>
#include <stdlib.h>

main()
{
char text[80];

printf("%d Ready to system()...\n", getpid());
sprintf(text,"date -u");
system(text);
printf("%d Did it work?\n",getpid());
sleep(10);
printf("%d Indeed it did.\n", getpid());
}



