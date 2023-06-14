#include <iostream>
using namespace std;
class Number
{
private:
    int iNo;

public:
    Number(int X)
    {
        iNo = X;
    }
    void Display()
    {
        int iCnt = 1;
        while (iCnt <= iNo)
        {
            printf("%d\t", iCnt);
            iCnt++;
        }
    }
};
int main()
{
    int iValue = 0;
    cout << "Enter the number: ";
    cin >> iValue;

    Number nObj(iValue);

    nObj.Display();
    return 0;
}