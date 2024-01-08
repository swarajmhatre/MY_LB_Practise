#include<iostream>
using namespace std;
int Factors(int iNo){
    int iCount =0;
    for(int i=1; i<=iNo/2; i++){
        if(iNo %i == 0){
            iCount++;
        }
    }
    return iCount;
}
int main(){
    int iNo;
    cin>> iNo;
    int iRet = Factors(iNo);
    cout<< iRet;
    return 0;
}