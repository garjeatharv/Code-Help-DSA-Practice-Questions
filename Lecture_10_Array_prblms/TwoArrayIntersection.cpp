#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5] = {1,2,3,4,5};
    int b[2] = {3,5};
    int i=0,j=0;
    cout<<"The common elements are: ";
    while(i<5 && j<2){
        if(a[i] == b[j]){
            cout<<a[i]<<" ";
            j++;
        }
        i++;
    }
return 0;
}
