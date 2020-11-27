#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a,b,i,top=0;
   printf("Birinci sayiyi giriniz :  ");
   scanf("%d",&a);
   printf("Ýkinci sayiyi giriniz :  ");
   scanf("%d",&b);
   for(i=a;i<=b;i++)
   {
   	if(i%2 ==0)
   	{ 
   	  top+=i;
   	   
	   }
   }
   printf("toplam : %d \n",top);
   return 0;
}
