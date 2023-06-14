// Count 'z'
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int countz(char *str)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str == 'z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Enter the word: ");
    scanf("%[^'\n']s", Arr);

    iRet = countz(Arr);

    printf("THe count of z in the string is: %d", iRet);
    return 0;
}