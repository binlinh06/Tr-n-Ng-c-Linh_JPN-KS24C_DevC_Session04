#include<stdio.h>

int main(){
	
	int numb;
	printf("Moi ban nhap so:");
	scanf("%d",&numb);
	if(numb>0||numb<0){
		if(numb>0){
			printf("So ban nhap la so duong");
		}
		else{
			printf("So ban nhap la so am");
		}
	}	
	else{
		printf("ERROR");
	}
	
	
	
	return 0;
}
