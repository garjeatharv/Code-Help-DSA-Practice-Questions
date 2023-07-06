#include<bits/stdc++.h>
using namespace std;

void print(int v[],int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void moveZeroBack(int arr[] , int n){

    int nonZero = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[nonZero]);
            nonZero++;
        }
    }
    
    print(arr,n);
}
int main(){
    int arr[7] = {0,1,0,3,4,0,0};

    moveZeroBack(arr,7);

    return 0;
}