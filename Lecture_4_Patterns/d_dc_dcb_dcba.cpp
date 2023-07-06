#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int alpha = 65;
    char ch;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            ch = 65 - j + n;
            cout<<ch;
        }
        cout<<endl;
    }
    
return 0;
}