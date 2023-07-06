#include<bits/stdc++.h>
using namespace std;

char toLow(char ch){
    // char temp = ch - 'a' + 'A';
    char temp = tolower(ch);
    return temp; 
    
}
char toUp(char ch){
    // char temp = ch - 'A' + 'a';
    char temp = toupper(ch);
    return temp;
}
int main(){
    char ch[10] ;
    cin>>ch;
    for(int i=0; ch[i] !='\0';i++){
        ch[i] = toLow(ch[i]);
    }
    cout<<"Char is : "<<ch<<endl;
    for(int i=0; ch[i] !='\0';i++){
        ch[i] = toUp(ch[i]);
    }
    cout<<"Char is : "<<ch;
return 0;
}