#include<stdio.h>
int main()
{  
  char harf;
  printf("a yada b harfine bas�n�z.\n");
  scanf("%c",&harf);
  switch(harf)
  {
  	case 'a' : printf("a harfine bast�n�z.\n"); 
  	break;
  	case 'b' : printf("b harfine bast�n�z.\n");
  	break;
  	default :
  		printf("ge�ersiz bir karakter girdiniz.\n");
  }
  return 0;
}
