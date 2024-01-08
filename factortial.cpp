#include<iostream>
using namespace std;
int iFactorial(int n){
    int iRet=1;
    if(n==0){
        return 1;
    }
    for(int i=1; i<=n; i++){
        iRet = iRet *i;
    }
    return iRet;
}
int rFactorial(int n){
    if(n ==0){
        return 1;
    }
    return n*rFactorial(n-1);
}
int main()
{
    int n;
    cin>> n;
    cout << iFactorial(n)<< endl;
    cout << rFactorial(n)<<endl;
    return 0;
}