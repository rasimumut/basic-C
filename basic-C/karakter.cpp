#include<stdio.h>
#include<stdlib.h>
int main()
{
	char karakter;
	printf("Bir karakter giriniz: ");
	scanf("%c",&karakter);
	if(karakter>='a' && karakter<='z')
	  { 
	      printf("Girdiğiniz %c harfi kucuk girilmistir.",karakter);
	
	  }
	  else if(karakter>='A' && karakter<='Z')
	  {
	  	printf("Girdiğiniz %c harfi buyuk girilmistir.",karakter);
	  }
	  else
	  { 
	  printf("Girdiğiniz karakter gecersizdir.");
	  }
	  return 0;
}
