#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,N,top=0;
    printf("Bir sayi giriniz : ");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{ 
	    if(i % 2 == 1 )
	    {
	    	printf("\n %d ",i);
	    	top=top+i;
	      	
		}
				}
			printf("Sayilarin toplamý : %d ",top);
		return 0;	
}
