#include<bits/stdc++.h>
using namespace std;

int ara[1000],temp[1000];

void mergesort(int lo,int hi){

    int mid;

    if(lo==hi)
        return;

    mid=(lo+hi)/2;

    mergesort(lo,mid);
    mergesort(mid+1,hi);

    int i,j,k;
    for(i=lo,j=mid+1,k=lo;k<=hi;k++){
        if(i==mid+1)
            temp[k]=ara[j++];
        else if(j==hi+1)
            temp[k]=ara[i++];
        else if(ara[i]<ara[j])
            temp[k]=ara[i++];
        else
            temp[k]=ara[j++];
    }

    for(k=lo;k<=hi;k++){
        ara[k]=temp[k];
    }

}


int main(){
    int n,lo,hi,i;
    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];
    lo=0;
    hi=n-1;

    mergesort(lo,hi);

    for(i=0;i<n;i++)
        cout<<ara[i]<<" "<<endl;
}
