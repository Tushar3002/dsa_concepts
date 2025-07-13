#include<iostream>
#include<vector>
using namespace std;

void revArray2(vector<int> &v,int i,int n){
    if(i>=n/2) return;
    swap(v[i],v[n-i-1]);
    revArray2(v,++i,n);
}
void revArray(vector<int> &v,int st,int end){
    if(st>=end) return;
    swap(v[st++],v[end--]);
    revArray(v,st,end);

}


void PrintV(vector<int> v){
    for(int i:v){
        cout << i << " ";
    }
}

int main(){
    vector<int> v={1,2,3,4,5};
    int n=v.size();
    //revArray(v,st,end);
    revArray2(v,0,n);
    PrintV(v);
    return 0;
}