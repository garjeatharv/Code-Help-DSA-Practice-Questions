//leetcode 1047 remove all adjecent duplicates in string
//run on online compiler

#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s = "azxxzy";
    // string s = "abbaca";
    // int len = s.length();
    // string space = "";
    // for(int i=0;i<len;i++){
    //     if(s[i] == s[i+1]){
    //         // s.replace(s.begin()+i,s.begin()+i+2,space);
    //         s = s.substr(0,i) + s.substr(i+2,s.length());
    //         cout << "i = " << i << " s = " << s << "s->len = "<<s.length()<<"\n";
    //         i=0;
    //         len -=2;
    //     }
    // }
    // cout<<s<<endl;
    string s = "azxxzy";
    // string s = "abbaca"; 
    string ans = "";
    for(int i=0;i<s.length();i++){
        if( s[i] != ans.back() ){
            ans = ans + s[i];
        }
        else{
            ans.pop_back();
        }
    }
    // for(auto &i : s){
    //     if(i==ans.back()){
    //         ans.pop_back();
    //     }
    //     else{
    //         ans+=i;
    //     }
    // }
    cout<<ans;
return 0;
}