#include<bits/stdc++.h>
using namespace std;        
int main(){
    int n= 7;
    int arr[7]={1,2,3,3,4,5,6};
    int ans=0;
    for(int i=0;i<n;i++){
         ans = ans ^ arr[i];
    }
    for(int j=1;j<n;j++){
        ans = ans ^ j;
    }
    cout<<ans;
return 0;
}