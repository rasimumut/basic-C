//Alptekin ÖZSOY
//182102050
#include<stdio.h>
int main () 
{
 int sifre,i=3,j=0,dizi[3],gecici,x;
 printf("Sifrelenmis Veriyi Giriniz: ");
 scanf("%d",&sifre);
 
 while (sifre > 0){      
        dizi[i]=sifre%10;
        i--;
        sifre = sifre/10;  
    }  
   
gecici=dizi[2];
dizi[2] = dizi[0];
dizi[0] = gecici;
gecici=dizi[3];
dizi[3]= dizi[1];
dizi[1]= gecici;

    for(i=0;i<4;i++)
    {	
		dizi[i] -=7	;
		if(dizi[i]<0)
			dizi[i] += 10;  
	}

printf("Sifre Cozuldu: ");
for(i=0;i<4;i++)
    {
    	printf("%d",dizi[i]);    	
    }




return 0;
}
