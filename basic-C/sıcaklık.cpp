#include<stdio.h>
#include<stdlib.h>
int main()
  { 
     int x;
     printf("S�cakl�k de�erini giriniz: ",x);
     scanf("%d",&x);
     if(x>=15 && x<=25)
     { 
         printf("S�cakl�k 15-25 derece aras�ndad�r.");
         
	 }
	 else 
	 {  
	      printf("S�cakl�k 15-25 derece aras�nda de�ildir");
	 }
	 return 0;
	 
  }
