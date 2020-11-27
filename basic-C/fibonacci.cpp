#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N,ilk,ikinci,sonraki,i;
	printf("Kaç adet uretilcek : ");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		if(i<=1)
		{
			sonraki=i;
		}
		else
		{
			sonraki=ilk+ikinci;
			ilk=ikinci;
			ikinci=sonraki;
		}
		printf("  %d  ",sonraki);
		
	}return 0;
}
