#include<iostream>
using namespace std;

bool CheckDigit(int iNo){
    while (iNo !=0)
    {
        if(iNo %10 == 8){
            break;
        }
        iNo = iNo/10;
    }
    if(iNo ==0){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    int iValue =0;
    cin>> iValue;
    if(CheckDigit(iValue)){
        cout <<"Ahe";
    }
    else{
        cout <<"nahi";
    }

    return 0;
}