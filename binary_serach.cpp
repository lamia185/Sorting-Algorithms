//Only for sorted array
#include<bits/stdc++.h>
using namespace std;

int binary_sear(int ara[],int l,int r,int x){
    while(l<=r){
        int m=l+((r-1)/2);//m=(l+r)/2 is also correct
        if(ara[m]==x)
            return m;
        if(ara[m]<x)
            l=m+1;
        else r=m-1;
    }
    return -1;

}

int main(){
    int ara[5]={1,2,3,4};
    int n=4;
    int x=4;
    int result=binary_sear(ara,0,n-1,x);

    if(result==-1)
        cout<<"Not found"<<endl;
    else
        cout<<"found at "<<result<<endl;

}
