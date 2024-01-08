#include<stdio.h>
int factorial(int iNo){
    int iRet =1;
    for(int i=1; i<=iNo; i++){
        iRet *= i;
    }
    return iRet;
}
int RFactorial(int iNo){
    if(iNo ==1 ){
        return 1;
    }
    return iNo * RFactorial(iNo-1);
}
int main(){
    int iNo;
    scanf("%d", &iNo);
    printf("%d\n", factorial(iNo));
    printf("%d", RFactorial(iNo));
    return 0;
}