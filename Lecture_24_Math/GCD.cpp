#include <bits/stdc++.h>
using namespace std;

void gcd(int n, int m)
{
    int l = max(n, m);
    int s = min(n, m);
    int ans = 1;
    for (int i = s; i >= 1; i--)
    {
        if ((l % i == 0) && (s % i == 0))
        {
            ans = i;
            break;
        }
    }
    cout << ans << ' ';
}

int gcdLB(int n, int m)
{

    if (n == 0)
        cout << m << " ";
    else if (m == 0)
        cout << n << " ";
    
    while( n!=m){
        if(n>m)
            n = n-m;
        else
            m = m-n;
    }
    return m;
}

int main()
{

    int n, m;
    cin >> n >> m;
    // gcd(n,m);
    int a = gcdLB(n, m);
    cout << a;
    return 0;
}