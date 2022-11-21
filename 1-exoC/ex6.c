#include <stdio.h>
int fact(int n);
void main()
{
	int n,res;
	do
	{
		printf("insert n>0\n");
		scanf("%d",&n);
	}while(n<0);
	res=fact(n);
	printf("Factoriel(%d)=%d\n",n,res);
}

int fact(int n)
{
	if (n==0) 
		{
		return 1;
		}
	else 
		{
		return (n*fact(n-1));
		} 
}
