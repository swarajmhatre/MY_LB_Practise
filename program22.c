#include<stdio.h>
int Factors(int iNo){
    int iCount =0;
    for(int i=1; i<=iNo/2; i++){
        if(iNo%i ==0){
            iCount++;
        }
    }
    return iCount;
}
int main(){
    int iNo;
    scanf("%d", &iNo);
    int iRet = Factors(iNo);
    printf("%d",iRet);
    return 0;
}