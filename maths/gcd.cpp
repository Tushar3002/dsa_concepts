//gcd or hcf

#include<iostream>
using namespace std;

int solve(int a,int b){
    int gcd=1;
    if(a==b){ return a;}
    if(a==0){return b;}
    if(b==0){return a;}
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;
}

//euclid algo

int euclid(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}

int gcdRec(int a,int b){
    if(b==0) return a;

    return gcdRec(b,a%b);
}

//LCM  ==>  a*b = gcd(a,b)*lcm(a,b)

int lcm(int a,int b){
    return (a*b) / gcdRec(a,b);
}

int main(){
    cout << solve(15,17)<< endl;
    cout << euclid(20,28)<<endl;
    cout << gcdRec(28,20)<<endl;
    cout << lcm(20,28);
    return 0;
}