#include<bits/stdc++.h>
using namespace std;

int div(int n,int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);

    return c1+c2-c3;
}

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int z = div(n,a,b);
    cout<<"there are "<<z<<" numbers divisible by "<< a<<" and "<<b;
    return 0;
}