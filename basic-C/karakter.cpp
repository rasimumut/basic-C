#include<stdio.h>
#include<stdlib.h>
int main()
{
	char karakter;
	printf("Bir karakter giriniz: ");
	scanf("%c",&karakter);
	if(karakter>='a' && karakter<='z')
	  { 
	      printf("Girdi�iniz %c harfi kucuk girilmistir.",karakter);
	
	  }
	  else if(karakter>='A' && karakter<='Z')
	  {
	  	printf("Girdi�iniz %c harfi buyuk girilmistir.",karakter);
	  }
	  else
	  { 
	  printf("Girdi�iniz karakter gecersizdir.");
	  }
	  return 0;
}
