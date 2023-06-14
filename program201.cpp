// CheckPalindrome
// --------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class strclass
{
private:
    char *start = NULL;
    char *end = NULL;
    bool bFlag = true;

public:
    bool CheckPalindrome(char *str)
    {
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
};

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter the string: ");
    scanf("%[^'\n']s", Arr);

    strclass sObj;

    bRet = sObj.CheckPalindrome(Arr);

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