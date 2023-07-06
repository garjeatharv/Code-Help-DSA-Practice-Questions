//pivot is basically least no present in the array

int pivotEle(int arr[], int n){

    int s=0;
    int e= n-1;
    int mid = s + (e-s)/2;
    while(s<e){

        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7] = {7,8,9,10,11,1,3};
    cout<<"The Pivot element is at index "<<pivotEle(arr,7);
return 0;
}