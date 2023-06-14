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
        if (iRow != iCol)
        {
            printf("\nInvalid Input.");
        }
        int i = 0, j = 0;

        for (i = 1; i <= iRow; i++)
        {
            for (j = 1; j <= iCol; j++)
            {
                if (i == j)
                {
                    printf("*\t");
                }
                else if (i < j)
                {
                    printf("@\t");
                }
                else
                {
                    printf("$\t");
                }
            }
            printf("\n");
        }
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter the rows and columns: ";
    cin >> iValue1 >> iValue2;
    Pattern pObj(iValue1, iValue2);
    pObj.Display();
    return 0;
}