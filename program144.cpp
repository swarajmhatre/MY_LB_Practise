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
        cout << endl;

        for (i = 1; i <= iRow; i++)
        {
            for (j = iCol; j >= 1; j--)
            {
                if (i == j)
                {
                    cout << "#\t";
                }
                else if (i <= j)
                {
                    cout << "*\t";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter the number of Rows: ";
    cin >> iValue1;

    cout << "\nEnter the number of Cols: ";
    cin >> iValue2;

    Pattern pObj(iValue1, iValue2);

    pObj.Display();

    return 0;
}