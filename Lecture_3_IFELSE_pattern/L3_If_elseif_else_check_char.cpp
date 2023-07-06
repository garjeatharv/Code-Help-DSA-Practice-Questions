#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a = cin.get();
    int n = int(a);
    cout << "The int value is" << n << endl;
    if (n >= 65 and n <= 90)
    {
        cout << "Upper case";
    }
    else if (n >= 97 and n <= 122)
    {
        cout << "Lower case";
    }
    else if (n >= 48 and n <= 57)
    {
        cout << "Numeric value";
    }
    else
    {
        cout << "Invalid input";
    }
    return 0;
}