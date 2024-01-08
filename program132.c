#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            if(i ==1 || i ==iRow || j == 1 || j == iCol ){
                printf("$\t");
            }
            else if(i==j){
                printf("*\t");
            }
            else{
                printf(" \t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iRow, iCol;
    scanf("%d", &iRow);
    scanf("%d", &iCol);

    Pattern(iRow, iCol);
    return 0;
}