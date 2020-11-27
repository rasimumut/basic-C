#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
int main()
{
	int a,b;
	char kontrol;
	printf("Ýlk sayýyý giriniz: \n ");
	scanf("%d",&a);
	printf("Ýkinci sayýyý giriniz: \n ");
	scanf("%d",&b);
	printf("Hangi islemi yapacaksýn (+  -  *  /):");
	kontrol = getche();
	if(kontrol == '+')
	{
		printf("\nToplama islemi sonucu= %d",a+b);
    }
    else if(kontrol == '-')
    { 
       printf("\nCýkarma islemi sonucu= %d",a-b);
	}
	 else if(kontrol == '*')
    { 
       printf("\nCarpma islemi sonucu= %d",a*b);
	}
	 else if(kontrol == '/')
    { 
       printf("\nBolme islemi sonucu= %.3f",(float)a/(float)b);
	}
	else 
	{ 
	  printf("Gecersiz islem girdiniz...");
	}
	return 0;
}
