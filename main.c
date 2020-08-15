#include <stdio.h>
#include <string.h>

int main()
{
    printf("-Enter a credit number: ");
    long int number = 0;
    scanf("%ld", &number);
    char credit[20];
    sprintf(credit, "%ld", number); 
    long int sum = 0;
    long int size = strlen(credit);
    // the checksum
    for (int i = size - 1; i >= 0; i -= 2)
    {
        sum += credit[i] - '0';
    }
    for(int i = size -2; i >= 0; i -= 2)
	{
		int temp = 0;
		temp += (credit[i]-'0') * 2;
		if(temp > 9)
		{
			temp -= 9;
		}
		sum += temp;
	}
    if (size >= 13)
    {
        if (sum % 10 == 0)
        {
            if (credit[0] == '4')
            {
                printf("VISA\n");
            }
            else if((credit[0] == '3' && credit[1] == '4') || credit[0] == '3' && credit[1] == '7')
            {
                printf("AMEX\n");
            }
            else if((credit[0] = '5' && credit[1] == '1') || (credit[0] = '5' && credit[1] == '2') || (credit[0] = '5' && credit[1] == '3') || (credit[0] = '5' && credit[1] == '4') || (credit[0] = '5' && credit[1] == '5'))
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    
}