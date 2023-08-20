#include <bits/stdc++.h>
using namespace std;

int  findsum(int x){
    if(x==1){
        return 1;
    }
    else{
        return x+ findsum(x-1);
    }
}

int main(){
    cout<<"sum of first 10 natural no. is : "<<findsum(10);
}