#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n = v.size();
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     for(int i=1;i<n;i++){
    if(v[i-1]<v[i]&&v[i+1]>v[i])
        cout<<"yes sorted";
    else
        cout<<" no its not sorted";
    }
}