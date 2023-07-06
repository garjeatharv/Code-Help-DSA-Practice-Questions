#include<bits/stdc++.h>
using namespace std;

int sbinary(int arr[], int n,int key){
    int s=0,e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e = mid-1;
        }
        else if(key>arr[mid]){
            s= mid+1;
        }
        else if(key>arr[mid]){
            e=mid-1;
        }
        mid=s +(e-s)/2;

    }
    return ans;
}
int ebinary(int arr[], int n,int key){
    int s=0,e=n-1,mid= s+(e-s)/2,ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s = mid+1;
        }
        else if(key>arr[mid]){
            s= mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[9] = {0,1,2,3,3,3,3,3,5};
    int key = 3;
    cout<<"First occurence is :"<<sbinary(arr,9,key)<<endl; 
    cout<<"Second occurence is :"<<ebinary(arr,9,key);
return 0;
}