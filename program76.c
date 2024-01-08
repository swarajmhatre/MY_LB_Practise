#include<stdio.h>
#include<stdlib.h>
int Addition(int Arr[], int iLength){
    int add=0;
    for(int i=0; i<iLength; i++){
        add = add + Arr[i];
    }
    return add;
}
int main(){
    int iSize =0;
    int *ptr = NULL;
    int iRet =0;

    printf("Enter number of elemens: \n");
    scanf("%d", &iSize);

    ptr =(int *)malloc(iSize*sizeof(int));
    for(int i=0;i<iSize; i++){
        scanf("%d", &ptr[i]);
    }
    iRet = Addition(ptr, iSize);
    printf("%d", iRet);
    
    return 0;
}