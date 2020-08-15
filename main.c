#include <stdio.h>
#include <string.h>

int main()
{
    printf("-Enter a credit number: ");
    long int number = 4003600000000014;
    char* theNumber;
    sprintf(theNumber, "%ld", number); 
    int sum = 0;
    long int size = strlen(theNumber);
    // the checksum
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
    if (sum % 10 == 0)
    {
        if (size == 15 && theNumber[1] == 34)
        {
            printf("AMEX\n");
        }
        else if (size == 16 && theNumber[1] == 55)
        {
            printf("MasterCard\n");
        }
        else
        {
            printf("Visa\n");
        }
    }
    else
    {
        printf("Invalid\n");
    }
}