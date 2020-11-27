 #include<stdio.h>
 int main()
 {
 	int sayi;
 	printf("Bir sayi giriniz= ",sayi);
 	scanf("%d",&sayi);
 	if(sayi%2==0)
 	{
 		printf("Girdiðiniz %d sayisi çifttir.",sayi);
 		
	 }
	 else
	 { 
	   printf("Girdiðiniz %d sayisi tektir.",sayi);
	 }
 	return 0;
 	
 }
