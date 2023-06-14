// CHeckPerfect
// ---------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (int iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum += iCnt;
        }
    }
    return (iNo == iSum);
}

int main()
{
    int iValue = 0;
    int bRet = false;
    printf("Enter the number: ");
    scanf("%d", &iValue);
    bRet = CheckPerfect(iValue);

    if (bRet)
    {
        printf("\nThe number is a perfect number.");
    }
    else
    {
        printf("\nThe number is not a perfect number.");
    }

    return 0;
}