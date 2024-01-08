#include <iostream>
using namespace std;
void strRevX(string &str1){
    int j = str1.length() -1;
    char ch = str1[0];
    int i=0;
    while (i< j)
    {
        ch = str1[j];
        str1[j] = str1[i];
        str1[i] = ch;
        i++;
        j--;
    }
    
}
int main(){
    string str1,str2 ;
    cin >> str1;
    strRevX(str1);
    cout << str1;
    return 0;
}