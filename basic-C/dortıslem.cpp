 #include<stdio.h>
 int main()
 {
 	int a,b,secim;
 
 	printf("****MENU****  \n");
 	printf("[1]Toplama\n");
 	printf("[2]C�karma\n");
 	printf("[3]Carpma\n");
 	printf("[4]Bolme\n");
  	printf("Yap�lacak i�lemi seciniz=");
 	scanf("%d",&secim);
 	switch(secim)
 	{
 		case 1:
 		printf("Birinci sayiyi giriniz: ",a);
 	     scanf("%d",&a);
 	     printf("�kinci sayiyi giriniz:  ",b);
 	    scanf("%d",&b);
 	     printf("Toplama i�lemi sectiniz: %d ",a+b);
 	     break;
 	     case 2:
 		printf("Birinci sayiyi giriniz: ",a);
 	     scanf("%d",&a);
 	     printf("�kinci sayiyi giriniz:  ",b);
 	    scanf("%d",&b);
 	     printf("C�karma i�lemi sectiniz: %d ",a-b);
 	     break;
 	     case 3:
 		printf("Birinci sayiyi giriniz: ",a);
 	     scanf("%d",&a);
 	     printf("�kinci sayiyi giriniz:  ",b);
 	    scanf("%d",&b);
 	     printf("Carpma i�lemi sectiniz: %d ",a*b);
 	     break;
 	     case 4:
 		printf("Birinci sayiyi giriniz: ",a);
 	     scanf("%d",&a);
 	     printf("�kinci sayiyi giriniz:  ",b);
 	    scanf("%d",&b);
 	     printf("Bolme i�lemi sectiniz:  %d ",a/b);
 	     break;
	 }
 	return 0;
 }
