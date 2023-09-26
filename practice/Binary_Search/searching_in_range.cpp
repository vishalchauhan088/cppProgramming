#include <bits/stdc++.h>
using namespace std;

int bSearch(int low, int high, function <bool (int)> condition){
    while(low<=high){
        int mid = (low+high)/2;
        if(condition(mid)){
            low= mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low-1;
}

int main(){
    int x = bSearch(0,20,[](int x){return x*x<=121;});
    cout<<"value is:"<<x<<endl;
}