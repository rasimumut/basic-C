 #include<stdio.h>
 int main()
 {
 	int a,b,c;
 	printf("Sayilari giriniz: \n");
 	scanf("%d%d%d",&a,&b,&c);
 	if(a>b && a>c)
 	{
 		printf("%d sayisi hepsinden b�y�kt�r.",a);
 	}
 	   else	if(b>c && a<b)
 		 { 
 		 printf("%d sayisi hepsinden b�y�kt�r.",b);
		  }
		  else if(c>a && c>b)
		  { 
		    printf("%d sayisi hepsinden b�y�kt�r.",c);
		  }
		  else
		  { printf("Gecersiz islem");
		  }
		 return 0; 
 		

 	 
 }
