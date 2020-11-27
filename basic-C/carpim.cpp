#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf(" %d  x %d = %3d\t",j,i,(i*j));	
		}
		printf("\n");
	}

		for(j=6;j<=10;j++)
		{
			printf(" %d  x %d = %3d\t",j,i,(i*j));	
		}	
		
	return 0;
	
}
