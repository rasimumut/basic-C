#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int sayi,i,basamak=0;
	printf("Bir sayi giriniz : " );
	scanf("%d",&sayi);
	do
	{
		printf("%d. basamak %d \n",i+1,sayi%10);
		sayi=sayi/10;
		i++;
	}
	while(sayi>0);
	return 0;
	
	
}
