#include<stdio.h>
#include<stdlib.h>
int main ()
{
	char sifre;
	int sonuc=0,hak=3,N=0;
	while((hak--) > 0)
	{
		printf("Sifreniz : ");
		scanf(" %s ", &sifre);
		sonuc=strcmp(sifre,"123456");
		if(sonuc==0)
		{
			printf("sifre dogru..");
			break;
			
		}
		else
		{
			printf("sifre yanl��..");
			N++;
		}
	}
	if(N==3)
	{
		printf("Sifrenizi �c defa yanl�� girdiniz..");
	}
	return 0;
}
