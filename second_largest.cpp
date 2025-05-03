#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int secondLargest(int *arr,int n)
{
int snd = INT_MIN;
int l = arr[0];
for(int i = 1;i<n;i++){
    if(arr[i]>l)
    {
        snd = l;
        l = arr[i];
        
    }
    else{
        if(arr[i]>snd && arr[i]!=l)
        {
            snd = arr[i];
        }
    }
}
if(snd==INT_MIN)
{
    return -1;
}
return snd;
}


int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);    
    int sL=secondLargest(arr,n);
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}