#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for(int j=1;j<n-i;j++){
            cout<<"_";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        for(int k=i+1; k>=1 ;k--){
            cout<<k;
        }
        cout<<endl;
    }

return 0;
}