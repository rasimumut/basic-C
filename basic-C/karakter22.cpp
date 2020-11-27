#include<stdio.h>
#include<stdlib.h>
int main()
  {
	char karakter;
	printf("Bir karakter giriniz: ");
	scanf("%c",&karakter);
	if(karakter>='a' && karakter<='z')
	{
		printf("Girilen karakter büyük hali : %c\n",karakter-32);
			}
			else
			{ printf("yanlis bir karakter.\n");
			}
			return 0;
  }
