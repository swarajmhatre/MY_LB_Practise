// CheckPalindrome
// --------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

bool CheckPalindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bFlag = true;
    start = str;
    end = str;
    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        if (*start != *end)
        {
            bFlag = false;
            break;
        }
        start++;
        end--;
    }

    return bFlag;
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("ENter the string: ");
    scanf("%[^'\n']s", Arr);

    bRet = CheckPalindrome(Arr);

    if (bRet)
    {
        printf("\nThe string is a palindrome.");
    }
    else
    {
        printf("\nThe string is not a palindrome.");
    }

    return 0;
}