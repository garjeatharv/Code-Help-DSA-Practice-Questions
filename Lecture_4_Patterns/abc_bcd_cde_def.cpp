#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=65;
    int no;
    cin>>no;
    for(int i=1;i<=no;i++){

        for(int j=1;j<=3;j++){
            cout<<char(n);
            n= n+1;
        }
        n=n-2;
        cout<<endl;
    }
return 0;
}