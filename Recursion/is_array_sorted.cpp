#include<iostream>
#include<vector>
using namespace std;

bool sol(vector<int> v,int n){
    
    if(n==0 || n==1) return true;

    return v[n-1] >= v[n-2] && sol(v,n-1);

}

int main(){
    vector<int> v={1,9,3,4,5};
    int n=v.size();
    
    cout << sol(v,v.size());
    return 0;
}