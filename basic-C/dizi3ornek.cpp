#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int p[100],n[100],i,pos=0,nes=0,N,say;
	printf("Dizinin eleman sayisi: " );
    scanf("%d",&N);
    int d[N];
     for(i=0;i<N;i++)
	{ 
	  printf("d[%d] =" ,i+1);
	  scanf("%d",&d[i]);	  
	}
	for(i=0;i<N;i++)
     {
  	if(d[i]>0)
  	{
  	     p[pos]=d[i];
	  	 pos++;
	  	
	  }
	  else if(d[i]<0)
	  {
	    n[nes]=d[i];
	    nes++;
	  }
  
  }
  printf("Pozitif tam sayilarýn adedi : %d  \n" , pos);
  printf("Negatif tam sayilarýn adedi : %d  \n" , nes);
  printf("Pozitif elemanlar \n " );
  for(i=0;i<pos;i++)
  printf(" %d ",p[i]);
   printf(" \n Negatif elemanlar \n " );
  for(i=0;i<nes;i++)
  printf(" %d ",n[i]);
   return 0;
}
