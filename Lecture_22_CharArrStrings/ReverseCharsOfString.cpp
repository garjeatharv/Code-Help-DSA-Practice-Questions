//leetcode 186 reverse word string II
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="the sky is bl
    ue";

    int i=0,j=0,n=s.size();
    cout<<s<<endl;
    while(i<n){
        j = i+1;
        while (j<=n)
        {
            if(s[j] == ' ' ){
                j--;
                break;
            }
            if(s[j] == '\0'){
                j--;
                break;
            }
            j++;
        }
        int ind = j;
        while(i<=j){
            swap(s[i] ,s[j]);
            i++;j--;
        }
        i=ind+2;
    }
    cout<<s;

return 0;
}