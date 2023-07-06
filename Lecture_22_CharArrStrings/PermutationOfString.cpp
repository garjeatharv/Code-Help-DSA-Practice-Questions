//leetcode 567  permutation of string
#include<bits/stdc++.h>
using namespace std;

void prstr(string s){
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
void prarr(int arr[]){
    for(int i=0;i<26;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

bool cheakequal(int a[],int b[]){
    for(int i=0;i<26;i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string s = "eidbaooo";
    string sub = "bd";
    int arr[26] = {0};

    for(int i=0;i<sub.length();i++){
        int ind = sub[i] - 'a';
        arr[ind]+=1;
    }
    
    for(int i=0;i<s.length();i++){
        int temp[26] = {0};
        int range = i+sub.length();
        for(int j=i;j<range;j++){
            int in = s[j] - 'a';
            temp[in]+= 1;
            cout<<s[j];
        }
        cout<<endl;
        if(cheakequal(arr,temp)){
            cout<<"Present";
            return 1;
        }
    }
    cout<<"Not Present";
    

return 0;
}

/*
    string s = "eidbaooo";
    string sub = "di";
    int arr[26] = {0};
    for(int i=0;i<sub.length();i++){
        int index = sub[i] - 97;
        arr[index]++;
    } 
    // prstr(sub);
    prarr(arr);
    int temp[26] = {0};
    for(int i=0;i<s.length(); i++){
        for(int j=i;j<sub.length();j++){
            int index = sub[i] - 97;
            temp[index]++; 
        }
        int count=0;
        for(int k=0;k<26;k++){
            if(arr[i] == temp[i]){
                count++;
            }
            else if(arr[i] !=temp[i]){
                break;
            }
        }
        if(count == 26){
            cout<<"Present"<<endl;
            break;
        }
    }*/





    /*WRONG OUTPUT
    //making array increasing index with their occurence
    for(int i=0;i<sub.length();i++){
        int index = sub[i] - 97;
        arr[index]++;
    } 
    // prstr(sub);
    // cout<<"Arr "<<prarr(arr)<<endl;
    //traverse to each ele with the window 
    for(int i=0;i<s.length(); i++){
        int temp[26]; //temp array to compare window
        for(int te = 0;te<26;te++){
            temp[te] = 0;
        }
        int j=i;
        for(int c=0;c<sub.length();c++){
            int index = s[j] - 97;
            temp[index]++; 
            j++;
        }
        j=0;
        int count=0;
        for(int k=0;k<26;k++){
            if(arr[i] == temp[i]){
                count++;
            }
            else if(arr[i] !=temp[i]){
                break;
            }
        }
        if(count == 26){
            cout<<"Present"<<endl;
            return 0;
        }
    }
    cout<<"Not Present"<<endl;*/