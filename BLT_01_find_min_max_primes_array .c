//BLT 01. Dung ham random() de tao mang 20 so nguyen to ngau nhien < 200, hien thi mang, min, max
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*Function check prime number
check = 1: prime number
check = 0: not a prime number */
int checkPrimeNumber(int N)
{
	int i, j, check = 1;
	if(N <= 1)
		check = 0;
	else
	{
		for(i = 2; i <= sqrt(N); i++)
		{
			if(N % i == 0)
				check = 0;
		}
	}	
	return check;
}

//Random prime number generator
int getRandomPrime(int min,int max){
	int number;
	while(1)
	{
		number = min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
		if(checkPrimeNumber(number) == 1)
			break;
	}
    return number;
}


int main()
{
	int i, minValue, maxValue, primeArr[20];
	
	//Random primes array
	srand((unsigned int)time(NULL));
	for(i = 0; i < 20; i++)
	{
		primeArr[i] = getRandomPrime(1, 200);
		//printf("%d ", primeArr[i]);
	}
	
	//Find min, max and show
	minValue = primeArr[0];
	maxValue = primeArr[0];
	printf("\nPrimes array: \n");
	for(int i = 0; i < 20; i++)
	{
		printf("%d, ", primeArr[i]);
		if(primeArr[i] < minValue)
			minValue = primeArr[i];
		if(primeArr[i] > maxValue)
			maxValue = primeArr[i];
	}
	printf("\nminValue = %d\n", minValue);
	printf("maxValue = %d", maxValue);
		
	return 0;
}
