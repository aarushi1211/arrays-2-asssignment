#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[9] = {2,4,5,6,7,9,8,19,13};
    int x;
    cin>>x;
    int count = 0;
    for(int i=0;i<9;i++){
        if(arr[i]>x)
        count ++;
    }
    cout<<count;
}
