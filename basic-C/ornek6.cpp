 #include<stdio.h>
 int main()
 {
 	int a,b,c;
 	printf("Sayilari giriniz: \n");
 	scanf("%d%d%d",&a,&b,&c);
 	if(a>b && a>c)
 	{
 		printf("%d sayisi hepsinden büyüktür.",a);
 	}
 	   else	if(b>c && a<b)
 		 { 
 		 printf("%d sayisi hepsinden büyüktür.",b);
		  }
		  else if(c>a && c>b)
		  { 
		    printf("%d sayisi hepsinden büyüktür.",c);
		  }
		  else
		  { printf("Gecersiz islem");
		  }
		 return 0; 
 		

 	 
 }
