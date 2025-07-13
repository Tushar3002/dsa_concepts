#include<iostream>
using namespace std;

void pat1(int n){
    int sp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << "*";
        }

        for(int j=0;j<sp;j++){
            cout << " ";
        }

        for(int j=0;j<n-i;j++){
            cout << "*";
        }cout << endl;
        sp += 2;
    }
    //downpart
    sp=(2*n-2);
    for(int i=0;i<n;i++){
        
        for(int j=0;j<=i;j++){
            cout << "*";
        }

        for(int j=0;j<sp;j++){
            cout << " ";
        }

        for(int j=0;j<=i;j++){
            cout << "*";
        }cout << endl;
        sp -= 2;
        
    }
}

void pat2(int n){
    int sp=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars = 2*n - i;
        for(int j=0;j<stars;j++){
            cout << "*";
        }

        for(int j=0;j<sp;j++){
            cout << " ";
        }

        for(int j=0;j<stars;j++){
            cout << "*";
        }cout << endl;
        if(i<n) sp -= 2;
        else sp +=2;
    }
}

void pat3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pat4(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int down=(2*n-2)-i;
            int left=j;
            int right=(2*n-2)-j;
            cout << (n-min(min(top,down),min(left,right)));
        }cout << endl;
    }
}

int main(){
    int n=5;
    pat1(n);
    pat2(n);
    pat3(n);
    pat4(n);
    return 0;
}