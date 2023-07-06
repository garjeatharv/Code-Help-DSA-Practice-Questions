#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
        int s= 1,n=-1;
        int e = x/2;
        int dif=x+1;
        int mid= s+ (e-s)/2;
        while(s<e){
            int ms = mid*mid;
            if(ms == x){
                return mid;
            }
            if( ms <= x){
                int temp = ms-x;
                if(temp<=dif){
                    dif = temp;
                    n = mid;
                }
            }
            if(ms > x){
                e = mid-1;
            }
            else if(ms < x){
                s = mid+1;
            }
            mid = s+ (e-s)/2;
        }
        if((s*s)> x){
            s--;
        }
        return s;
    }
int main(){
    for(int i=0;i<=40;i++){
        cout<<"SQRT of "<<i<< "is : "<<mySqrt(i)<<endl;
    }
return 0;
}