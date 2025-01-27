#include <stdio.h>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;
void find(int arr[],int n){
    int ss=100;
    int s=100;
    int sl=-1;
    int l=-1;
    for(int i=0;i<n;i++){
        s=min(s,arr[i]);
        l=max(l,arr[i]);

    }
    for(int  i=0;i<n;i++ ){
        if(arr[i]<ss && arr[i]!=s){
            sl=arr[i];
        }
        if(arr[i]>sl && arr[i]!=l){
            ss=arr[i];
        }
    }
    cout<<ss<<endl<<sl;
    
}

int main()
{
    int arr[]={1,3,2,5,4};
    int n=5;
    find(arr,n);
    

    return 0;
}