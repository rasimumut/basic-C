#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i,N[20],sayi;
	printf("Bir sayi giriniz ");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++)
	{
		printf("Dizinin N[%d].eleman� : ",i+1);
		scanf("%d",&N[i]);
	
	}
	printf("Girilen diziyi ekrana yazd�r : \n");
	for(i=0;i<sayi;i++)
	{
		printf("%d ",N[i]);
	}
	return 0;
}
