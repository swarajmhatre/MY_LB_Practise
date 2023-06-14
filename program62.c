#include <stdio.h>

int CountOddDigits(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue;
    int iRet;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = CountOddDigits(iValue);

    printf("The count of odd digits in the number: %d", iRet);
    return 0;
}