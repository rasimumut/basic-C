#include<stdio.h>
#include<stdlib.h>
int main()
{
	char karakter;
	printf("Bir karakter giriniz: ");
	scanf("%c",&karakter);
	if(karakter>='a' && karakter<='z')
	  { 
	      printf("Girdišiniz %c harfi kucuk girilmistir.",karakter);
	
	  }
	  else if(karakter>='A' && karakter<='Z')
	  {
	  	printf("Girdišiniz %c harfi buyuk girilmistir.",karakter);
	  }
	  else
	  { 
	  printf("Girdišiniz karakter gecersizdir.");
	  }
	  return 0;
}
