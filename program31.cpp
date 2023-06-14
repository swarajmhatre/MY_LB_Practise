#include <iostream>
using namespace std;

class Numbers
{
private:
    int iCnt = 0;
    bool bFlag = true;

public:
    bool CheckPrime(int iNo)
    {
        if((iNo== 0)|| (iNo == 1)){
            bFlag = false;
            return bFlag;
        }
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
};

int main()
{
    int iValue = 0;
    bool bRet = false;
    Numbers nObj;
    cout << "Enter the number: ";
    cin >> iValue;

    bRet = nObj.CheckPrime(iValue);

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