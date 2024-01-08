#include<iostream>
using namespace std;
void strrev(string &str){
    int i=0;
    int j = str.length()-1;
    char temp;
    while (i<j)
    {
        temp = str[i];
        str[i]= str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    string str;
    cin>> str;
    strrev(str);
    cout << str;
    return 0;
}