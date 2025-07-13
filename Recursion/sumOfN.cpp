#include<iostream>
using namespace std;

int solve(int n,int sum){ //parametrised way
    if(n==0) return sum;
    solve(n-1,sum+n);
}
int solve2(int n){//function way
    if(n==0) return 0;
    return n + solve2(n-1);
}

int factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    // cout << solve(n,0) << endl;
    // cout << solve2(n) << endl;
    cout << factorial(n) << endl;
    return 0;
}