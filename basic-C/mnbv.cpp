#include <stdio.h>
#include <math.h>
/* 

ax^2 + bx + c þeklindeki denklemin
*/
int main() {
	
	int a,b,c;
	float x1,x2;
	float delta=0;

	
	printf("denklemin a'sini giriniz:");
	scanf("%d",&a);
	printf("denklemin b'sini giriniz:");
	scanf("%d",&b);
	printf("denklemin c'sini giriniz:");
	scanf("%d",&c);
	
	delta = b*b -4*a*c;
	x1 = ((-b + sqrt(delta)) / 2*a ;
	x2 = ((-b - sqrt(delta)) / 2*a ;
	printf("denklemin 1.koku %.2f \n denklemin 2.koku %.2f'dir",x1,x2);
	
	return 0 ; 
}
