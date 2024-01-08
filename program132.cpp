#include <iostream>
using namespace std;
void Pattern(int iRow, int iCol){
    int i,j;
    for( i=1; i<=iRow; i++){
        for( j = 1; j<=iCol; j++){
            if( (i == 1) ||( i == iRow )|| (j==1) || (j== iCol)){
                cout << "$\t";
            }
            else if(i == j){
                cout << "*\t";
            }
            else{
                cout << " \t";
            }
        }
        cout<< "\n";
    }
}
int main(){
    int i=0, j=0;
    cin>>i>>j;
    Pattern(i,j);
    return 0;
}