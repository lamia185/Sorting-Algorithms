#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ara[1000],i,j,temp;

    cin>>n;
    for(i=1;i<=n;i++)
        cin>>ara[i];


    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if(ara[j]>ara[j+1]){
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;

            }
        }
    }

    for(i=1;i<=n;i++){
        cout<<ara[i]<<endl;
    }

}
