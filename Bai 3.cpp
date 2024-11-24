#include<stdio.h>

int main(){
		
	int numb;
	printf("Moi ban nhap so:");
	scanf("%d",&numb);
	if(numb%3==0&&numb%5==0){
		printf("Chia het cho ca 3 va 5");
	}
	else{
		if(numb%3==0){
			printf("Chia het cho 3");
		}
		else{
			if(numb%5==0){
			printf("Chia het cho 5");
		}
		else{
			printf("Ko chia het cho 3 va 5");
		}
	}
}
    return 0;
}
