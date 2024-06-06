#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int soe = 0;
    int soo = 0;
    int differ;
    for(int i = 0;i<n;i++){
        if(v[i]%2==0) 
        soe+=v[i];
        else
        soo+=v[i];
    }
    differ = soe - soo;
    cout<<differ;
}