#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int * iArray = new int[20];
    delete[] iArray;
    cout << iArray[10];
//     cout << sqrt(64) << endl;
// cout << round(2.6) << endl;
// cout << log(2) << endl;
//  float fNo = 35e3;
//  double dNo = 12E4;
//  cout << fNo << endl <<dNo;
//  string s1 ="swaraj";
//  string s2 ="mhatre";
//  cout<< s1.append(s2);
 
//  getline(cin, s1);
//  cout << endl << s1;
    return 0;
}