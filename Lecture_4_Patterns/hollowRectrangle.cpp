#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=9,m=5;

    for(int i=1;i<=m;i++){
        if(i==1 || i==m){
            for(int j=1;j<n;j++){
                cout<<" * ";
            }
        }
        for(int j=1;j<=n;j++){
            if(j==1 || j==n){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }

    return 0;
}