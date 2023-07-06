#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=2;
    int n;
    cin>>n;

    while(i<=n){
        if(i%n==0){
            cout<<"Not a prime";
            return 0;
        }
        i+=i;
    }
    cout<<"Prime";

    return 0;
}