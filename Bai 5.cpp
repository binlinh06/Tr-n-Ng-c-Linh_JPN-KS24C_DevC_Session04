#include<stdio.h>
int main(){
	int a,b;
	printf("moi ban nhap so a = ");
	scanf("%d",&a);
	printf("moi ban nhap so b = "); 
	 scanf("%d",&b);
	 
	 if(a < 0){
	 	printf("DIEU KIEN SAI!!"); 
	 } else if(b>a){
	 	printf("So %d khong nam trong khoang  So %d và So 0 ",b,a); 
	 } else if (0 < b < a){
	 	printf("So %d  nam trong khoang  So %d va So 0",b,a); 
	 } 
	 return 0; 
} 
