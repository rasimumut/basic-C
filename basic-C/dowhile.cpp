#include<stdio.h>
#include<stdlib.h>
int main()
{
	 double maasort;
     int i,N,maas,toplam=0;
     printf("Personel sayisi giriniz: ",N);
     scanf("%d",&N);
   
     do
     {
       printf("Maas deger giriniz: ",i+1);
     scanf("%d",&maas);	
     toplam=toplam+maas;
     i++;
   }
   while(i<N);
   maasort=(float)toplam/N;
  printf("ODENEN TOPLAM MAAS : %d",toplam);
  printf("ODENEN MAAS ORTALAMASI : %.0f ",maasort);
  return 0;
}
