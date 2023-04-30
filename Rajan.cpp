#include <bits/stdc++.h>

using namespace std;

int main()
{
    float p,r,t,ci;
    try{
        cin>>p>>r>>t;
        if(cin){
            ci=(p*pow((1+(r/100)),t))-p;
            cout<<fixed<<setprecision(3)<<ci;
        }
        else 
        throw 0;
    }
    catch(int i){
        cout<<"Insufficient Data";
    }
    return 0;

}
