#include <iostream>
using namespace std;

int main(){
    int n,m;
    try{
    cin>>n;
    cin>>m;
    if(cin){
        cout<<(n-1)*(m-1);
    }
    else
    throw 0;
    }
    catch(int boardsize){
        cout<<"Invalid Board Size";
    }
               return 0;
}
