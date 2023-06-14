// CHeckPerfect
// ---------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

class Number
{
private:
    int iCnt;
    int iSum;
    int iNo;

public:
    Number(int x)
    {
        iNo = x;
    }
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
};

int main()
{
    int iValue = 0;
    int bRet = false;
    cout<< "Enter the number: ";
    cin>> iValue;

    Number nObj(iValue);
    bRet = nObj.CheckPerfect(iValue);

    if (bRet)
    {
       cout<< "\nThe number is a perfect number";
    }
    else
    {
       cout<< "\nThe number is not a perfect number";
    }

    return 0;
}