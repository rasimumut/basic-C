#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayi1,sayi2,asal,i;
	printf("Bir sayi degeri giriniz: ");
	scanf("%d",&sayi1);
	printf("Bir sayi degeri giriniz: ");
	scanf("%d",&sayi2);
	for(i=sayi1;i<=sayi2;i++)
	{
		if(sayi2 % i==0 )
		{
			asal=asal+1;
			printf(" %d sayilar� asald�r.",asal);
		}
		else 
		{ 
		printf("say�lar asal de�ildir.");
		}
		
	}
	return 0;
	
	
}

