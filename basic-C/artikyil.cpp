#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,yil1,yil2,artikyil;
	printf("�lk y�l� giriniz: ",yil1);
	scanf("%d",&yil1);
	printf("�kinci y�l� giriniz: ",yil2);
	scanf("%d",&yil2);
	for(i=yil1;i<=yil2;i++)
	{
		if(i % 4 == 0 || i % 400 == 4)
		printf(" %d yili artik yildir. \n",i);
		
	}
	return 0;
}

