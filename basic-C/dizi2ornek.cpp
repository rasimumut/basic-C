#include<stdio.h>
int main()
{
	int A[100],i,yeni[100],sayi=0,n,say=0;
	printf("Dizinin eleman sayisi : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
	  printf("A[%d] " ,i+1);
	  scanf("%d",&A[i]);
	  
	}
	//dizi elemanlarýný çaðýrma
	for(i=0;i<n;i++)
	{
		if(A[i]%10==0)
		  {
		     yeni[sayi]=A[i];
		     sayi++;
		     say++;
		  }
		  
	}
    // yeni dizi yazdýrma
    if(sayi!=0)
    {

	for(i=0;i<sayi;i++)
	printf("%3d",yeni[i]);
	printf("%d",say);
}
    else 
    printf("Dizide hic eleman yok\n");
	return 0;
}
