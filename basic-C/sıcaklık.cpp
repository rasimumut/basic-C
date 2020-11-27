#include<stdio.h>
#include<stdlib.h>
int main()
  { 
     int x;
     printf("Sýcaklýk deðerini giriniz: ",x);
     scanf("%d",&x);
     if(x>=15 && x<=25)
     { 
         printf("Sýcaklýk 15-25 derece arasýndadýr.");
         
	 }
	 else 
	 {  
	      printf("Sýcaklýk 15-25 derece arasýnda deðildir");
	 }
	 return 0;
	 
  }
