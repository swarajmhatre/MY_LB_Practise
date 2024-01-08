#include<iostream>
using namespace std;
class ArrayX{
    private:
        int iMax;
        int iMin;

    public:
    ArrayX(){
        iMax=0;
        iMin=0;
    }
    int Maxdede(int Arr[], int iSize){
        iMax=0;
        for(int i=0; i< iSize; i++){
            if (Arr[i]> iMax){
                iMax =Arr[i];
            }
        }
        return iMax;
    }

};
int main()
{
    int iSize =0;
    cin>> iSize;
    int *Arr = new int(iSize);
    for(int i=0; i<iSize; i++){
        cin>> Arr[i];
    }
    ArrayX arr;
    int iRet = arr.Maxdede(Arr, iSize);
    cout<< "MAX is: "<< iRet<< endl;
    delete []Arr;
    return 0;
}