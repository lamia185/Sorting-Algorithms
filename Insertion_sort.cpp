#include<bits/stdc++.h>
using namespace std;

int main(){

    int ara[1000],i,j,k,n,x;

    cin>>n;
    for(i=1;i<=n;i++){
        cin>>ara[i];
    }

    for(i=1;i<=n;i++){
        x=ara[i];
        j=i-1;

        while(j>=1 && ara[j]>x){
            ara[j+1]=ara[j];
            j--;
        }
        ara[j+1]=x;
    }

    for(i=1;i<=n;i++){
        cout<<ara[i]<<endl;
    }
}
