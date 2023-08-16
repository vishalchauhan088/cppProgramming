//hackerrank question:
/*pop out the stack till the sum of element of all three stack is equal*/

#include <bits/stdc++.h>
using namespace std;

int stackEqual(vector <int> h1, vector <int> h2, vector <int> h3){
    int sum1 = 0, sum2 = 0, sum3 = 0;

    for(int i=0;i<h1.size();i++){
        sum1 += h1[i];
    }
    for(int i=0;i<h2.size();i++){
        sum2 += h2[i];
    }
    for(int i=0;i<h3.size();i++){
        sum3 += h3[i];
    }
    
    cout<<sum1<<sum2<<sum3<<endl;
    int x;

    bool found = false;
    while(!found){
        if((sum1 == sum2)&& (sum2== sum3)){
            x=sum1;
            found = true;
            cout<<sum1<<endl;
            
        }
        else if((sum1 >= sum2)& (sum1 >= sum3)){
                sum1  -= h1.back();
                h1.pop_back();

        }
        else if((sum2 >= sum1) & (sum2 >= sum3)){
            sum2 -= h2.back();
            h2.pop_back();
        }
        else{
            sum3 -= h3.back();
            h3.pop_back();
        }
    }
    return 0;

}

int main(){
    vector <int> h1;
    vector <int> h2;
    vector <int> h3;

    int x;
    for(int i=1;i<=4;i++){
        h1.push_back(i);
    }
    for(int i=1;i<=3;i++){
        h2.push_back(i);
    }
    for(int i=1;i<=5;i++){
        h3.push_back(i);
    }
stackEqual(h1,h2,h3);

}
