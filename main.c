#include <stdio.h>
#include <string.h>

int main()
{
    printf("-Enter a credit number: ");
    long int number = 378282246310005;
    scanf("%ld", &number);
    char theNumber[20];
    sprintf(theNumber, "%ld", number); 
    long int sum = 0;
    long int size = strlen(theNumber);
    // the checksum
    for (int i = size - 1; i >= 0; i -= 2)
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
        if (size == 15)
        {
            if (theNumber[0] == '3' && theNumber[1] == '7')
            {
                printf("AMEX\n");
            }
        }
        else if (size == 13 || size == 16)
        {
            if (theNumber[0] == '4')
            {
                printf("VISA\n");
            }
        }
        else 
        {
            printf("MASTERCARD\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}