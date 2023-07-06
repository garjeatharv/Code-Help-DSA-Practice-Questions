#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//M1
void revarr(int arr[], int n){

    for(int i=0;i<=(n/2);i++){
        swap(arr[i],arr[n-i-1]);
    }
    printarr(arr,n);
}

//M2
void addlast(int arr[],int arr1[],int n){

    for(int i=n-1;i>=0;i--){
        arr1[n-i-1] = arr[i];
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    //M1 to swap first ith ele and (n-1)th ele
    // revarr(arr,5);

    //M2 add last ele to 1st in new array 
    int arr1[5] = {0};
    addlast(arr,arr1,5);
    printarr(arr1,5);

return 0;
}