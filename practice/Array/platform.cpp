#include <bits/stdc++.h>
using namespace std;

int main(){
    float arrival[6]   = { 2.00, 2.10, 3.00, 3.20, 3.50, 5.00 };
    float departure[6] = { 2.30, 3.40, 3.20, 4.30, 4.00, 5.20 };

    int max =0;
    
    for(int i=0;i<5;i++){
        int current = 1;
        int k = i+1;
        while(departure[i]>arrival[k]){
            k++;
            current++;
        }
        max =  max>current?max:current;
    }   
    cout<<max<<endl;
}