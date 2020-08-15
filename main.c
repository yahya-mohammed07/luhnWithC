#include <stdio.h>
#include <string.h>

int main()
{
    printf("-Enter a credit number: ");
    long int number = 4003600000000014;
    char* theNumber;
    sprintf(theNumber, "%ld", number); 
    int sum = 0;
    int size = strlen(theNumber);
    //*
    for (int i = size - 1; i > 0; i -= 2)
    {
        sum += theNumber[i] - '0';
    }
    for(int i = size -2; i >= 0; i -= 2)
	{
		int temp = 0;
		temp += (theNumber[i]-'0') * 2;
		if(temp > 9)
		{
			temp -= 9;
		}
		sum += temp;
	}
    
    printf("%d",sum);
	//*    
}