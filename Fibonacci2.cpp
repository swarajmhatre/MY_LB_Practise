#include<iostream>
using namespace std;
int Fibonacci(int iNo){
    int a =0;
    int b=1;
        for (int i = 0; i < iNo; i++)
        {
            if(i==0){
                cout << "0\t";
            }
            else{
                cout << b<<"\t";
                int temp = a+b;
                a = b;
                b= temp;
            }


        }
        
}
int rFibonacci(int iNo){
    if(iNo ==0 || iNo == 1){
        return iNo;
    }
    return rFibonacci(iNo-1) + rFibonacci(iNo-2);
}
int main()
{
    int iNo=0;
    cin>> iNo;

    return 0;
}