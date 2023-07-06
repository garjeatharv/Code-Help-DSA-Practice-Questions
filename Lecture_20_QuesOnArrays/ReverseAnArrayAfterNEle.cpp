#include<bits/stdc++.h>
#include<vector>
using namespace std;


void print(vector<int> v){

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> revN(vector<int> v, int n){

    int s = n, e = v.size()-1;
    vector<int> ans;
    while(s<=e && e>n){
        swap(v[s] , v[e] );
        s++;
        e--;
    }

    return v;

}
int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout<<"Before swap"<<endl;
    print(v);
    vector<int> ans = revN(v,2);
    cout<<"After swap"<<endl;
    print(ans);

    return 0;

}