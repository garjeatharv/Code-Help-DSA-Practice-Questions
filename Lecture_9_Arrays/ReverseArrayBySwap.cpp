#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int s =0,e = 4;
    while(s<=e){
        // int temp = arr[e]; //
        // arr[e] = arr[s]; //
        // arr[s] = temp; //
        swap(arr[e],arr[s]);
        s++;
        e--; 
        cout<<endl<<"Printing array"<<endl;
        for(int i=0;i<5;i++){
            cout<<arr[i]<< " ";
        }
    }
return 0;
}