#include <stdio.h>

void strrev(char *str, char *brr)
{
    int iLength = 0;
    while (*str != '\0')
    {
        str++;
        iLength++;
    }
    str--;
    while (iLength != 0)
    {
        *brr = *str;
        str--;
        brr++;
        iLength--;
    }
    *brr = '\0';
}
int main()
{
    char str[20];
    char brr[20];
    scanf("%[^\s]s", str);
    strrev(str, brr);
    printf("%s",brr);
    return 0;
}