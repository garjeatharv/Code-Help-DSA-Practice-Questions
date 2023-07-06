#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {4,5,4,6,5};
    int n =0,ans=0;
    sort(arr,arr+5);
    for(int i=0;i<5;i++){
        if(i%2==0)
            ans = ans-arr[i]
        else
            ans = ans + arr[i];
        cout<<ans<<" ";
    }
    cout<<endl<<ans;
    // O(n) solution
    // for(int i=0;i<5;i++){
    //     n = n ^ arr[i];
    // }
    // cout<<n;
return 0;
}