#include<stdio.h>
int main()
{

     int i,n;
	printf("Dizinin eleman sayisi: ");
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	{
		printf("dizinin A[%d]. elemani :",i+1); // a[1]. eleman demesi için
		scanf("%d",&A[i]);
		printf("\n");
		
	}
	printf("Girilen diziyi ekrana yaz\n");
	for(i=0;i<n;i++)
	printf("  %d ",A[i]);
	return 0;
	
}
