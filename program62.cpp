#include <iostream>
using namespace std;

class Digit
{
    int iNo;
    int iDigit;
    int iCnt;

public:
    Digit(int x)
    {
        iNo = x;
        iDigit = 0;
        iCnt = 0;
    }

    int CountOddDigits()
    {
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
};

int main()
{
    int iValue;
    int iRet;

    cout << "Enter the number: ";
    cin >> iValue;

    Digit dObj(iValue);

    iRet = dObj.CountOddDigits();

    cout << "\nThe count of odd digits in the number: " << iRet;
    return 0;
}