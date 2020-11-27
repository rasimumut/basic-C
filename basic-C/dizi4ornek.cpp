#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int d[100],N,i,eb,sayi,yer;
    printf("Dizinin eleman sayisi: " );
    scanf("%d",&N);
     for(i=0;i<N;i++)
	{ 
	  printf("d[%d] =" ,i+1);
	  scanf("%d",&d[i]);	  
	}
	
	eb=d[0];
	for(i=0;i<N;i++)
	{
		if(eb<d[i])
		{
			eb=d[i];
			yer=i;
		}
	}
  	printf("En buyuk sayi : %d \n ",eb);
	printf("en buyuk elemanýn yeri : %d ",yer+1);
	return 0;
}
