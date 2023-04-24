#include<bits/stdc++.h>
using namespace std;
template <class Ribbon>
Ribbon Pieces(Ribbon n,Ribbon a,Ribbon b,Ribbon c){
    int d=1,e,i,j;
    for(i=0;i<=4000;i++)
    for(j=0;j<=4000;j++) {
        e=n-a*i-b*j;
        if(e>=0&&e%c==0)
        d=max(d,i+j+e/c);
    }
    cout<<d;
    return 1;
}
int main(){
int n,a,b,c;
cin>>n>>a>>b>>c;
Pieces(n,a,b,c);
}
