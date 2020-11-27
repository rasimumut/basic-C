#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayi,us,i,islem;
	printf("Bir sayi degeri giriniz : ",sayi);
	scanf("%d",&sayi);
	printf("Bir üs degeri giriniz : ",us);
	scanf("%d",&us);
	for(i=1;i<=us;i++)
	 { 
	    islem=islem*sayi;
	    
	 }
	 printf(" %d sayisinin %d. kuvveti : %d .dir ",sayi,us,islem);
	 return 0 ;
}
