#include<iostream>
using namespace std;

void pat1(int n){
    for(int i=0;i<=n*2-1;i++){
        if(i<=n){
            for(int j=0;j<i;j++){
                cout << "*";
            }
            cout<<endl;
        }else{ 
            for(int j=0;j<n*2-i;j++){
                cout << "*";
            }cout<<endl;
        }
    }
}
void pat2(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1; 
        else start=0;
        for(int j=0;j<i+1;j++){
            cout << start;
            start=1-start;
        }cout << endl;
    }
    
}

void pat3(int n){
    int sp=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int j=1;j<=sp;j++)
        {
            cout << " ";
        }
        
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;   
        sp -= 2; 
    }
}

void pat4(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << count;
            count += 1;
        }cout << endl;
    }
}
void pat5(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout << ch<< " ";
        }
        cout << endl;
    }
}
void pat6(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pat7(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pat8(int n){ // alpha pascal pyramid   
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        char ch= 'A';
        int breakpoint=(i*2+1)/2;
        for(int j=0;j<i*2+1;j++){
            cout << ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }cout << endl;    
    }
}

void pat9(int n){
    for(int i=0;i<n;i++){
        
        for(char ch='E'-i;ch<='E';ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){
    int n=5;
    pat1(n);
    pat2(n);
    pat3(n);
    pat4(n);
    pat5(n);
    pat6(n);
    pat7(n);
    pat8(n);
    pat9(n);
    char a='A';
    cout << int(a) << endl;
    return 0;
}