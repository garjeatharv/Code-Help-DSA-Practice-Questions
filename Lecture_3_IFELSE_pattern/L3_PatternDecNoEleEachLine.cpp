#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int r = n-i;
        for(int j=0;j<r;j++){
            cout<<i;
        }
        cout<<endl;
    }
return 0;
}