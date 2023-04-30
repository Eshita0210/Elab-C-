#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,m;
    try{
        cin>>n;
        cin>>m;
        float area=m*n;
        if(cin){
        cout<<ceil(area/2);}
        else 
        throw 0;
    }
    catch(int tiles){
        cout<<"Insufficient Information";
    }
    return 0;
}
