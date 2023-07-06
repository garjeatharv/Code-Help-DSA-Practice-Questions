#include<bits/stdc++.h>
#include<vector>
using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> merge(vector<int> v1,vector<int> v2){

    int s1= 0,s2=0;
    int e1= v1.size(),e2=v2.size();
    vector<int> v3;
    while(s1<e1 and s2<e2)
    {
        
        if(v1[s1] <= v2[s2])
        {
            v3.push_back(v1[s1]);
            s1++;
        }
        else
        if(v2[s2] <= v1[s1])
        {
            v3.push_back(v2[s2]);
            s2++;
        }   
    }

    while(s1<e1)
    {
        v3.push_back(v1[s1]);
        s1++;
    }

    while(s2<e2)
    {
        v3.push_back(v2[s2]);
        s2++;
    }

    return v3;
}
int main(){
    vector<int> v1 = {1,3,5,9,10};
    vector<int> v2 = {2,6,7,8};
    vector<int>  v3 = merge(v1,v2);
    print(v3);
return 0;
}