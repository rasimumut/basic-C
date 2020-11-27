#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int N,sayi,cifttop=0,tektop=0,i;
	printf("bir sayi giriniz :  ");
	scanf("%d",N);
	for(i=0;i<=N;i++)
	{
		if(i % 2 ==0 )
		{
			cifttop=cifttop+i;
		}
		else if(i % 2 == 1)
		{
			tektop=tektop+i;
		}
		else 
		{
			printf("YANLIS BÝR DEGER GÝRDÝNÝZ....");
		}
	}
	printf(" %d Sayisina kadar olan tek sayilarin toplami :  ",N,tektop);
	printf(" %d Sayisina kadar olan cift sayilarin toplami :  ",N,cifttop);
	return 0;
	
}
