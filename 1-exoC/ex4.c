#include <stdio.h>
#define size 5
void main()
{
int T[size];
int i;

for (i=0; i<size; i++)
{
printf("\ninserer T[%d]:",i);
scanf("%d",&T[i]);
}
printf("\n*****************************\n");
for (i=0; i<size; i++)
{
printf("T[%d]=%d\n",i,T[i]);
}

}
