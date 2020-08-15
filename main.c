#include <stdio.h>

int main()
{
    printf("-Enter a credit number: ");
    long int number = 4003600000000014;
   //scanf("%d", &credit);
    int sum = 0;
	//*
    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    
	//*    
}