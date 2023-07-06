#include <bits/stdc++.h>
using namespace std;
int main(){
    int s = 6; //size
    int arr[s] = {1,2,3,4,5,6};
    for(int i=0;i< s-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }
    cout<<"Printing Array"<<endl;
    for (int j = 0; j < s; j++)
    {
        cout<<arr[j]<< " ";
    }
    return 0;
}