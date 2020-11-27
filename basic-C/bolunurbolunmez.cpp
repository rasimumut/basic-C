#include<stdio.h>
#include<stdlib.h>
int main()
{
	int bolunensayi,bolensayi;
	float sonuc;
	printf("Bolunecek sayiyi giriniz:");
	scanf("%d",&bolunensayi);
	printf("Bolen sayiyi giriniz:");
	scanf("%d",&bolensayi);
	if(bolensayi == 0)
	{ 
	  printf("Girilen sayi 0 a bölünmez");
	}
	else
	{ 
	 sonuc=(float)bolunensayi/bolensayi;
	 printf("Sonuc : %.3f\n",sonuc);
	}
	return 0;
}
