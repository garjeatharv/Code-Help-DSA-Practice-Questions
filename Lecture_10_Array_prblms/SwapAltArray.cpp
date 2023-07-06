#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    // cout<<"printing array";
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void altswap(int o[], int size){
    int i=0;
    while(i<=size){
        // cout<<"in while loop";
        if((i+1)<size){
            swap(o[i],o[i+1]);
            // int t = o[i];
            // o[i] = o[i+1];
            // o[i+1] = t;
        }
        else{
            break;
        }
        i = i+2;
    }
}
int main(){
    int o[5]= {1,2,3,4,5};
    int e[6] = {1,2,3,4,5,6};
    int ao[5]={0};
    int n1=5,n2=6;
    int ae[6]={0};
    cout<<"Odd array : "<<endl;
    printArr(o,5);
    altswap(o,n1);
    cout<<"After alternet swap"<<endl;
    printArr(o,5);
    cout<<endl<<endl<<"even array :"<<endl;
    printArr(e,6);
    altswap(e,n2);
    cout<<"After alternet swap"<<endl;
    printArr(e,n2);
    
return 0;
}