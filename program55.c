#include<stdio.h>
#include<stdbool.h>
int CheckDigit(int iNo){
    int iDigit =0;
    while (iNo >0)
    {
        if(iNo%10 ==8){
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
    int iValue;
    scanf("%d", &iValue);
    if(CheckDigit(iValue)){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}