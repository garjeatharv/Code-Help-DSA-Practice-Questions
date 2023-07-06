#include<bits/stdc++.h>
using namespace std;

int counts(string str){
    int arr[26] = {0};
    int maxm = INT_MIN,ans=0;
    for(int i=0;i<str.size();i++){
        int n = str[i] - 97;
        arr[n] = arr[n] + 1;
    }
    for(int i=0;i<26;i++){
        // maxm = max(maxm,arr[i]);
        if(maxm < arr[i]){
            ans = i;
            maxm = arr[i];
        }
    }
    char finalans = 'a' + ans; 
    cout<<finalans<<endl;
    return maxm;
}
int main(){
    string s = "output";
    int n = counts(s);
    cout<<n;
return 0;
}