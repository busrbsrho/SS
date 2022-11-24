#include <stdio.h>
#include <math.h>

int main()
{
	int low = 0, high = 0;
	scanf("%d %d", &low, &high);
	printf("The Armstrong numbers are:");
	for(int i = low; i <= high; i++)
	{
		if(isArmstrong(i) == 1)
			printf(" %d", i);
	}
	printf("\n");
	printf("The Palindromes are:");
	for(int i = low; i <= high; i++)
	{
		if(isPalindrome(i) == 1)
			printf(" %d", i);
	}
	printf("\n");
	printf("The Prime numbers are:");
	for(int i = low; i <= high; i++)
	{
		if(isPrime(i) == 1)
			printf(" %d", i);
	}
	printf("\n");
	printf("The Strong numbers are:");
	for(int i = low; i <= high; i++)
	{
		if(isStrong(i) == 1)
			printf(" %d", i);
	}
	printf("\n");
	return 0;
}
