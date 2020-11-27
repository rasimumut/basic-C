#include<stdio.h>
int main()
{  
  char harf;
  printf("a yada b harfine basýnýz.\n");
  scanf("%c",&harf);
  switch(harf)
  {
  	case 'a' : printf("a harfine bastýnýz.\n"); 
  	break;
  	case 'b' : printf("b harfine bastýnýz.\n");
  	break;
  	default :
  		printf("geçersiz bir karakter girdiniz.\n");
  }
  return 0;
}
