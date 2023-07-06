#include <bits/stdc++.h>
using namespace std;

void primeSeive(int n)
{
    int prime[100] = {0};

    for (int i = 2; i < n; i++)
    {
        for (int j = i * i; j < n; j += i)
        {
            prime[j] = 1;
        }
    }
    for (int j = 1; j < n; j++)
    {
        if (prime[j] == 0)
        {
            cout << j << " ";
        }
    }
}

void primeFactors(int n){

    int spf[100] = {0};

    for(int i=2;i<=n;i++){
        spf[i] = i;
    }

    for(int i=2;i<=n;i++){
        if(spf[i] == i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }

    while(n!=1){
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }

}


int main()
{

    int n;
    cin >> n;
    // primeSeive(n);
    primeFactors(n);
    return 0;
}