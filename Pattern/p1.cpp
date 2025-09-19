#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << " * ";
        }cout << endl;    
    }
//  *  *  *  *  * 
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << " * ";
        }cout << endl;    
    }

//  *
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  *
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }cout << endl;    
    }

// 1
// 12
// 123
// 1234
// 12345
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i << " ";
        }cout << endl;    
    }
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout << " * ";
        }cout << endl;    
    }
//  *  *  *  *  *
//  *  *  *  *
//  *  *  *
//  *  *
//  *
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << '*' << " ";
        }cout << endl;    
    }
// * * * * *
// * * * *
// * * *
// * *
// *

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j << " ";
        }cout << endl;    
    }
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<i*2+1;j++){
            cout << '*';
        }cout << endl;    
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<n*2-(i*2+1);j++){
            cout << '*';
        }
        
        cout << endl;    
    }
    
    return 0;
}



//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *