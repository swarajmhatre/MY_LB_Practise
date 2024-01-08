#include<iostream>
using namespace std;
int Addition(int Arr[], int iLength){
    int result =0;
    for(int i=0; i< iLength; i++){
        result += Arr[i];
    }
    return result;
}
int main(){
    int iSize = 0;
    cout<<"Enter SIze\n";
    cin >> iSize;

    int * Arr = new int(iSize);

for(int i=0; i< iSize; i++){
    cin>>Arr[i];
}
    int iRet = Addition(Arr, iSize);

    cout<<iRet;
    delete [] Arr;
    return 0;
}