#include <stdio.h>
void Fibonacci(int iNo)
{
    int a = 0, b = 1, temp;
    for (int i = 0; i <= iNo; i++)
    {
        if (i == 0)
        {
            printf("%d\t", 0);
        }
        else
        {
            printf("%d\t", b);
            temp = a + b;
            a = b;
            b = temp;
        }
    }
}
int RFibonacci(int iNo){
    if(iNo ==0 || iNo ==1){
        return iNo;
    }
    return RFibonacci(iNo-1) + RFibonacci(iNo-2);
}
int main()
{
    int iNo;
    scanf("%d", &iNo);
    Fibonacci(iNo);
    printf("\n%d", RFibonacci(iNo));
    return 0;
}