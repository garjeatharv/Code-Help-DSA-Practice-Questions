#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int ans = 0;
    int num = 12;



    for(int i=0;i<5;i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            for (int k = i+2; k < 5; k++)
            {
                ans = arr[i] + arr[j] +arr[k];
                if( ans == num){
                    cout<<"the Sum can be "<< arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"="<<num<<endl;
                }
            }
            
        }
    }

return 0;
}