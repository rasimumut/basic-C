#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,yil1,yil2,artikyil;
	printf("Ýlk yýlý giriniz: ",yil1);
	scanf("%d",&yil1);
	printf("Ýkinci yýlý giriniz: ",yil2);
	scanf("%d",&yil2);
	for(i=yil1;i<=yil2;i++)
	{
		if(i % 4 == 0 || i % 400 == 4)
		printf(" %d yili artik yildir. \n",i);
		
	}
	return 0;
}

