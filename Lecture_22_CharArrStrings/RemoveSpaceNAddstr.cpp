//code studio "replace spaces    "
#include<bits/stdc++.h>
using namespace std;

string addrmv(string s){
    string t = "";
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            t.push_back('@');
            t.push_back('4');
            t.push_back('0');
        }
        else{
            t.push_back(s[i]);
        }
    }
    return t;
}
int main(){
    string str = "This is the text";
    cout<<addrmv(str);
return 0;
}