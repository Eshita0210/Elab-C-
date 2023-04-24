#include <iostream>
using namespace std;
template <class Bus>
Bus Ride(Bus n,Bus m) {return 0;}
int main()
{
    int n,m;
    cin>>n>>m;
    Ride(n,m);
    if(n==0) {
        cout<<"Impossible";
    }
    else if(m==0){
        cout<<n<<" "<<n;
    }
    else{
        cout<<max(n,m)<<" "<<n+m-1;
    }
    return 0;
}
