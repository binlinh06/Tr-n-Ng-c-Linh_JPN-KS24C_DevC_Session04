#include<stdio.h>
int main(){
	int dauthang, cuoithang, sum; 
	double VND; 
	printf("Nhap so dien dau thang ");
	scanf("%d",&dauthang);
	printf("Nhap so dien cuoi thang");
	scanf("%d",&cuoithang);
	 
	  sum = cuoithang - dauthang;
	  printf("Tong so dien tieu thu trong thang la : %d \n ",sum); 
	 
	if(cuoithang < dauthang){
		printf("LOI HE THONG!!!");
		return 1;
	}else if(0 <= sum && sum < 50){
		VND = sum  * 10.000;
		printf("Tong so tien dien thang nay la : %d * 10.000 = %.3f VND",sum,VND); 
	} else if(50< sum && sum < 100 ){
		VND = sum * 15.000;
		printf("Tong so tien dien thang nay la :  %d * 15.000 = %.3f VND",sum,VND); 
	} else if(100 < sum && sum < 150){
		VND = sum * 20.000;
		printf("Tong so tien dien thang nay la : %d * 20.000 = %.3f VND",sum,VND);		
	} else if(150 < sum && sum < 200){
		VND = sum * 25.000;
		printf("Tong so tien dien thang nay la : %d * 25.000 = %.3f VND",sum,VND);
	} else{
		VND = sum * 30.000;
		printf("Tong so tien dien thang nay la : %d * 30.000 = %.3f VND",sum,VND);
	}
	
	return 0;
} 
