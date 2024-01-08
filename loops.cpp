#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your loop number: ";

    int n;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "While loop";
        break;
    case 2:
        cout << "For loop";
        break;
    case 3:
        cout << "DO while loop";
        break;
    }
    return 0;
}