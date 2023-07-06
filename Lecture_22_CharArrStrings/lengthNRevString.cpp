#include<bits/stdc++.h>
using namespace std;

void rev(char name[], int n){
    int s=0,e=n-1;
    while (s<e)
    {
        swap(name[s],name[e]);
        s++;e--;
    }
    
}
int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;    
}
int main(){
    char name[20];
    cout<<"Enter ur name: ";
    cin>>name;
    cout<<"Name is: "<<name<<endl;
    int c = getLength(name);
    cout<<"Length is: "<<c<<endl;
    rev(name,c);
    cout<<"Name is: "<<name<<endl;
    return 0;
}