#include<stdio.h>
#include<stdlib.h>
int main()
{
	double ort=0;
	int sayi,i,N,toplam=0;
	printf("Ka� adet sayi girilecek: ");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{ 
	  printf("Sayi giriniz :  ",i+1);
	  scanf("%d",&sayi);
	  toplam += sayi;	  
	}
	ort=float(toplam)/N;
	printf("Say�lar�n toplam� : %d \n",toplam);
	printf("Say�lar�n ortalamas� : %.0f\n ",ort);
	return 0;
}
