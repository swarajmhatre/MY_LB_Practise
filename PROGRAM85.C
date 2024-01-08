#include<stdio.h>
#include<stdlib.h>
int maxX(int Arr[], int iSize){
    int iMax =0;
    for(int i=0; i< iSize; i++){
        if(Arr[i]> iMax){
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main(){
    int iSize, *Arr;
    scanf("%d", &iSize);
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("\nEnter kare : \n");
    for(int i=0; i< iSize; i++){
        scanf("%d", &Arr[i]);
    }

    int maxi = maxX(Arr, iSize);
    printf("Maximum element is: %d", maxi);
    return 0;
}