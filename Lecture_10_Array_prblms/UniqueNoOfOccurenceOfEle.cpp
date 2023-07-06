#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int a[10] = {-3,0,1,-3,1,1,1,-3,10,0};
    int count[10]={0};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] == a[j]){
                count[i] = 
            }
        }
    }
return 0;
}


/*Leetcode
int len= arr.size();
        vector<int> occ(len+1,0);
        sort(arr.begin(),arr.end());
        int n=0,count=0,j;
        for(int i=0;i<arr.size();i++){
            count=0;
            for(j=i;j<arr.size();j++){
                if(arr[i] == arr[j])
                    count++;
                else{
                    if(occ[count] == 1)
                        return false;
                    occ[count]= 1;
                    i=j-1;
                    break;
                }
            }
            if(j == len)
            {
                if(occ[count] == 1)
                    return false;  
                break;
            }
            
        }    
        
        return true;
    }*/