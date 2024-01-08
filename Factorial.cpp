#include<iostream>
using namespace std;
int Factorial(int iNo){
    int iRet =1;
    for(int i=1; i<=iNo; i++){
        iRet *= i;
    }
    return iRet;
}
int Rfactorial(int iNo){
    if(iNo ==1){
        return 1;
    }
    return iNo * Rfactorial(iNo-1);
}
int main(){
    int iNo;
    cout<< "Enter kro: ";
    cin>> iNo;
    cout<< "Sadha"<< Factorial(iNo)<< endl;
    cout<< "Recursive"<< Rfactorial(iNo);
    return 0;
}