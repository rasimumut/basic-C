#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,N,islem;
	printf("Hangi  sayinin tablosunu istiyorsunuz : ",N);
	scanf("%d",&N);
	for(i=1;i<=10;i++)
	{
		islem=i*N;
		printf(" %d  x  %d = %d \n ",i,N,islem);
	} return 0;
}
