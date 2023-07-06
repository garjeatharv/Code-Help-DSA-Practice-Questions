// #include<bits/stdc++.h>
// using namespace std;

// bool ispossible(vector<int> arr,int n,int m, int mid){
//     int stdc = 1;
//     int pgsum =0;
//     for(int i=0;i<n;i++){
//         if(pgsum + arr[i] <=mid){
//             pgsum += arr[i];
//         }
//         else{
//             stdc++;
//             if(stdc > m || pgsum > mid ){
//                 return false;
//             }
//             stdc++;
//             pgsum=arr[i];
//         }
//     }
//     return true;
// }
// int allocateBooks(vector<int> arr,int n, int m){

//     int s=0;
//     int sum=0;
//     int ans =-1;
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }
//     int e= sum;
//     int mid = s+(e-s)/2;
//     while(s<e){
//         if(ispossible(arr,n,m,mid)){
//             ans = mid;
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// int main(){

//     vector<int> arr = {10,20,30,40};
//     int n = arr.size();
//     int m = 2; //number of students

//     cout<<allocateBooks(arr,n,m);

// return 0;
// }



#include<bits/stdc++.h>
using namespace std;

bool ispossible(vector<int> arr,int n,int m, int mid){

    int pgc = 0;
    int stdc =1;
    for(int i=0;i<n;i++){
        if( (pgc + arr[i]) <= mid){
            pgc = pgc + arr[i];
        }
        else{
            stdc++;
            if(stdc > m || pgc > n){
                return false;
            }
            pgc=arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr,int n, int m){
    int sum =0,ans=-1;
    for(int i=0;i<n;i++){
        sum = arr[i];
    }
    int s=0;
    int e=sum;
    int mid = s + (e-s)/2;

    while(s<e){

        if(ispossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){

    vector<int> arr = {10,20,30,40};
    int n = arr.size();
    int m = 2; //number of students

    cout<<allocateBooks(arr,n,m);

return 0;
}


