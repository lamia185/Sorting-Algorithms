#include<bits/stdc++.h>
using namespace std;

void printara(int ara[],int n){
  int i=0;
  for(i=0;i<n;i++){
    cout<<ara[i]<<endl;
  }
}

void swa(int *a,int *b){
  int t;
  t=*a;
  *a=*b;
  *b=t;
}

int partition(int ara[],int lo,int hi){
  int pivot=ara[hi];
  int i=lo-1;

  for(int j=lo;j<=hi-1;j++){
    if(ara[j]<=pivot){
        i++;
        swa(&ara[i],&ara[j]);
    }
  }
  swa(&ara[i+1],&ara[hi]);
  return (i+1);

}

void quicksort(int ara[],int lo,int hi){
  if(lo<hi){
    int pi=partition(ara,lo,hi);

    quicksort(ara,lo,pi-1);
    quicksort(ara,pi+1,hi);
  }
}

int main(){
  int ara[1000],lo,hi,i,j,n;

  cout<<"N input"<<endl;
  cin>>n;
  for(i=0;i<n;i++)
  cin>>ara[i];

  lo=0;
  hi=n-1;

  quicksort(ara,lo,hi);

  cout<<"Sorted array"<<endl;
  printara(ara,n);
  return 0;

}
