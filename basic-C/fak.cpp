#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,sayi,fak;
	printf("Sayi giriniz:  ");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		fak=fak*i;
	}
	printf("Sayinin faktoriyeli : %d  ",fak);
	return 0;
}
