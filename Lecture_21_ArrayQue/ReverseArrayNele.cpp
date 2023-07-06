#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> revN(vector<int> v,int nr){
    // for(int i=0;i<v.size();i++){
    //     ind = i%nr;
    //     cout<<"index = "<<ind;
    //     ans[ind] = v[i];
    //     cout<<endl;
    //     count++;
    // }
    // for(int i=nr+1;i<n;i++){
    //     ans[count] = v[i];
    //     count++;
    // }
    vector<int> ans(v.size());
    for(int i=0;i<v.size();i++){
        ans[(i+nr)%v.size()] = v[i];
    }
    return ans;
}
int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};

    vector<int> ans = revN(v,6);
    print(ans);


    return 0;
}