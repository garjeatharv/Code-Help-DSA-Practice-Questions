#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int arr[n] = {1,1,0,0,0,0,1,0};
    int i=0,j=n-1;
    while(i<n-1 && j>0 && i<=j){
        if(arr[i] == 0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;j--;
        }
        // if(arr[i] == 1)
    }
    for (int k = 0; k < 8; k++)
        cout<<arr[k]<<" ";
return 0;
}