#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,ara[1000];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>ara[i];

    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(ara[i]>ara[j])
                swap(ara[i],ara[j]);
        }
    }

    for(i=1;i<=n;i++)
        cout<<ara[i]<<endl;
}
