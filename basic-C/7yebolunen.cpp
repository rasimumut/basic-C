#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int sayi,i,toplam=0;
	printf("Bir sayi degeri giriniz: ");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		if(i%7==0)
		{
			toplam=toplam+i;
			printf(" 7 ye tam  bolunen sayýlar : %d\n",i);
			
		}
		
	}
	printf(" toplamlarý : %d\n",toplam);
	return 0;
}
