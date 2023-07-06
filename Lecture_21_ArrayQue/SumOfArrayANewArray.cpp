#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> revVector(vector<int> v){
    int s= 0, e= v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

vector<int> addToNewVector(vector<int> a,vector<int> b){

    int as = a.size()-1, bs = b.size()-1;
    vector<int> c;
    int carry=0,sum=0,val=0;
    while(as>=0 and bs>=0){
        sum = a[as] + b[bs] + carry;
        carry = sum / 10;
        val = sum % 10;
        c.push_back(val);
        as--;
        bs--;
    }
    while(as>=0){
        sum = a[as] + carry;
        carry = sum / 10;
        val = sum % 10;
        c.push_back(val);
        as--;
    }
    while(bs>=0){
        sum = b[bs] + carry;
        carry = sum / 10;
        val = sum % 10;
        c.push_back(val);
        bs--;
    }
    while(carry!=0){
        sum = carry;
        carry = sum/10;
        val = sum%10;
        c.push_back(val);
    }
    return revVector(c);
}

int main(){
    vector<int> v1 = {4,5,1,6};
    vector<int> v2 = {3,4};
    vector<int> ans = addToNewVector(v1,v2);
    print(ans);

return 0;
}












/*int sumOfVector(vector<int> v){
    //{4,1,5} = 415
    int sum= 0;
    int n = v.size() - 1;
    int exp = 0;
    int index = n;
    int ans;


    while(exp <= n)
    {
        ans = (pow(10,exp))* v[index];
        sum += ans;
        exp++;
        index--;
    }
    return sum;
}*/