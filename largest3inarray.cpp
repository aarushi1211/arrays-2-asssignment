#include<iostream>
using namespace std;
int main(){
    int arr[9] = {2,4,5,6,7,9,8,19,13};
    int max = arr[0],smax = arr[0],tmax = arr[0];
    for(int i=0;i<9;i++){
        if(arr[i]>max)
        max = arr[i];
        if(arr[i]>smax&&arr[i]!=max)
        smax = arr[i];
        if((arr[i]>tmax&&arr[i]!=max)&&(arr[i]>tmax&&arr[i]!=smax))
        tmax = arr[i];
    }
    cout<<max<<" "<<smax<<" "<<tmax;
}