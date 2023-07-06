//Last element is not able to find
//2nd method at last
#include<bits/stdc++.h>
using namespace std;

int getpivot(vector<int>& arr, int siz){
    int s=0;
    int e= siz;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
void printarr(vector<int>& arr,int s, int e){
    cout<<endl<<"Printing array : "<<endl;
    for(int i=s;i<e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binarySearch(vector<int>& arr, int s , int e ,int key){
    int mid = s+ (e-s)/2;
    while(s<e){
        // printarr(arr,s,e);
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        else if (arr[mid] > key){
            e = mid;
        }
        mid = s  + (e-s)/2;
    }
    return -1;
}
int findPos(vector<int>& arr,int n, int key){
    int pivot = getpivot(arr, n);
    if( key >= arr[pivot] && key <= arr[n-1]){
        return binarySearch(arr,pivot,n-1,key);
    }
    else {
        return binarySearch(arr,0,pivot-1,key);
    }
}
int main(){
    int arr[7] = {7,9,10,11,1,2,3};
    vector<int> ar = {7,9,10,11,1,2,3};
    cout<<"The element is at the index "<<findPos(ar,7,3);

return 0;
}




/*we can also do this by appling simple contidtion
agar key ye arr[mid] se chota hai ya fir key ye arr[0] se chota hai tho right side
varna left*/