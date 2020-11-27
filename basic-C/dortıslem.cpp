 #include<stdio.h>
 int main()
 {
 	int a,b,secim;
 
 	printf("****MENU****  \n");
 	printf("[1]Toplama\n");
 	printf("[2]Cýkarma\n");
 	printf("[3]Carpma\n");
 	printf("[4]Bolme\n");
  	printf("Yapýlacak iþlemi seciniz=");
 	scanf("%d",&secim);
 	switch(secim)
 	{
 		case 1:
 		printf("Birinci sayiyi giriniz: ",a);
 	     scanf("%d",&a);
 	     printf("Ýkinci sayiyi giriniz:  ",b);
 	    scanf("%d",&b);
 	     printf("Toplama iþlemi sectiniz: %d ",a+b);
 	     break;
 	     case 2:
 		printf("Birinci sayiyi giriniz: ",a);
 	     scanf("%d",&a);
 	     printf("Ýkinci sayiyi giriniz:  ",b);
 	    scanf("%d",&b);
 	     printf("Cýkarma iþlemi sectiniz: %d ",a-b);
 	     break;
 	     case 3:
 		printf("Birinci sayiyi giriniz: ",a);
 	     scanf("%d",&a);
 	     printf("Ýkinci sayiyi giriniz:  ",b);
 	    scanf("%d",&b);
 	     printf("Carpma iþlemi sectiniz: %d ",a*b);
 	     break;
 	     case 4:
 		printf("Birinci sayiyi giriniz: ",a);
 	     scanf("%d",&a);
 	     printf("Ýkinci sayiyi giriniz:  ",b);
 	    scanf("%d",&b);
 	     printf("Bolme iþlemi sectiniz:  %d ",a/b);
 	     break;
	 }
 	return 0;
 }
