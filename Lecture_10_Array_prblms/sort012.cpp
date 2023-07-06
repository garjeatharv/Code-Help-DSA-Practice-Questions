#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[],int n){
    cout<<endl;
        // cout<<"Step :"<<step<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int n=9;
    int arr[n] ={0,2,2,1,0,1,1,0,2};
    
    int i=0,j=n-1,step =0;
    int o=0,t=0,th=0;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
            o++;
        else if(arr[i] == 1)
            t++;
        else 
            th++;
    }
    int s = o+t+th;
    for (int i = 0; i < s; i++)
    {
        if(o != 0){
            arr[i]= 0;
            o--;
        }
        else if(t!=0){
            arr[i] = 1;
            t--;
        }
        else{
            arr[i] = 2;
            th--;
        }
    }
    printarr(arr,n);
    
    
return 0;
    }









// while(i<j){
        // if(arr[i] == 1 || arr[i] == 0){
        //     i++;
        // }
        // if(arr[j] == 1 || arr[j] == 2){
        //     j--;
        // }
        // if(arr[i] == 2 && arr[j] == 0){  
        //     swap(arr[i], arr[j]);
        //     i++;j--;
        // }
        // // if(arr[j] == 1 && arr[i] == 2 && i<j){
        // //     swap(arr[i],arr[j]);
        // //     i++,j--;
        // // }
        // printarr(arr,n,++step);