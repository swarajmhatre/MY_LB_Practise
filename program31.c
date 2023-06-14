#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    bool bFlag = true;
    int iCnt = 0;
    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = 0;
    printf("Enter the number: ");
    scanf("%d", &iValue);
    bRet = CheckPrime(iValue);

    if (bRet)
    {
        printf("\nTHe number is a prime number");
    }
    else
    {
        printf("\nTHe number is not a prime number");
    }
    return 0;
}