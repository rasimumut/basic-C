#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{ 
   int sayac=0,os=0,sayi;
   printf("Oyuncu sayisi giriniz: ");
   scanf("%d",os);
   srand (time(NULL));
   while(1)
   {
   	sayi=rand() %7;
   	if(sayi!=0)
   	{
   		printf(" %d. oyuncu : %d \n",sayac+1,sayi);
   		sayac++;
    } 
	 else  if(sayac==os)
   {
   printf("Ýslem yoktur.");
   }
   
   }
  
   return 0;

}

