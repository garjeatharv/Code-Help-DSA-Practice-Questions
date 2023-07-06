// leetcode 1910 Remove all occurence of a substring
// s.erase() and s.find() to read
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "daabcbaabcbc";
    string sub = "abc";
    // while( s.length != 0 and s.find(sub) < s.length()){
    //     s.erase(s.find(sub),sub.length());
    // }
    
    while(s.length() != 0 and s.find(sub) < s.length()){
        s.erase(s.find(sub), sub.length());
    }

    cout<<s;
return 0;
}


