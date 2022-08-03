//BLT 04. Hien thi 20 so dau tien cua day fibonaci
#include<stdio.h>

void displayFibonaci(){
	int fibo[20];

	printf("The first 20 numbers of the fibonacci sequence:\n");
	for(int i = 0; i < 20; i++){
		if(i == 0){
			fibo[i] = 0;
		}
		else if(i == 1){
			fibo[i] = 1;
		}
		else {
			fibo[i] = fibo[i-1] + fibo[i-2];
		}

		printf("%d ", fibo[i]);
	}
}

int main(){
	displayFibonaci();
	return 0;
}
