#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum= 0 ;
    int i=0;
    while(i<=n){
        sum = sum+i;
        i++;
    }
    cout<<sum<<" is the sum of "<<n <<" nos.";
return 0;
}