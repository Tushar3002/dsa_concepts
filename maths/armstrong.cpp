#include<iostream>
#include<math.h>
using namespace std;

bool solve(int n){
    int rem,ans=0;
    int count=0;
    int dupl=n;
    // while(n>0){
    //     count++;
    //     n=n/10;
    // }
    //n=dupl;
    int k = to_string(n).length();
    
    while(n>0){
        rem=n%10;
        ans = ans + pow(rem,k);
        n /= 10;
    }
    // if(ans == dupl){
    //     return true;
    // }else{
    //     return false;
    // }
    return ans == dupl ? true : false;
}

bool isArm(int n){
    int copy=n;
    int ans=0;
    int len=to_string(n).length();
    while(copy!=0){
        int rem = copy % 10;
        ans += pow(rem,len);
        copy /= 10;
    }
    return ans == n;
}

int main(){
    cout << solve(371)<< endl;
    if(isArm(371)){
        cout << "Armstrong";
    } else{
        cout << "Not Armstrong";
    }
    return 0;
}