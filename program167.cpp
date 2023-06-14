// Count 'z'
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class strclass
{
    int iCnt = 0;

public:
    int countz(char *str)
    {
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
};

int main()
{
    char Arr[20];
    int iRet = 0;
    strclass sObj;
    cout << "Enter the String: ";
    cin >> Arr;

    iRet = sObj.countz(Arr);
    cout << "\nThe number of z in the String: " << iRet;
    return 0;
}