#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<"1";
        }
        for(int k=0;k<i;k++){
            cout<<"o";
        }
        cout<<endl;
    }
    return 0;
}