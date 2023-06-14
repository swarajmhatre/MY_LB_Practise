#include <iostream>
using namespace std;

class Pattern
{
private:
    int iRow;
    int iCol;

public:
    Pattern(int X, int Y)
    {
        iRow = X;
        iCol = Y;
    }
    void Display()
    {
        int i = 0;
        int j = 0;
        if (iRow != iCol)
        {
            cout << "\nInvalid Input.";
        }
        for (i = 1; i <= iRow; i++)
        {
            for (j = 1; j <= iCol; j++)
            {
                if ((i == j) || (i == 1) || (i == iRow) || (j == 1) || (j == iCol))
                {
                    cout << "*\t";
                }
                else
                {
                    cout << " \t";
                }
            }
            cout << "\n";
        }
    }
};

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;

    cout << "Enter the number of rows: ";
    cin >> iValue1;

    cout << "Enter the number of columns: ";
    cin >> iValue2;

    Pattern pObj(iValue1, iValue2);

    pObj.Display();
    return 0;
}