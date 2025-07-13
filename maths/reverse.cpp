#include<iostream>
using namespace std;

int solve(int n){
    int ans=0;
    while(n>0){
        int rem=n % 10;
        ans=ans * 10 + rem;
        n /= 10;
    }
    return ans;
}

int main(){
    cout << solve(4537)<< endl;
    return 0;
}