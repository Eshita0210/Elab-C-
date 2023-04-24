#include <iostream>
using namespace std;
template <class Interface>
Interface Bar(Interface n,Interface k,Interface t){
    t = t*k*n/100.0;
    while(n--){
        cout<<min(t,k)<<" ";
        t-=min(t,k);
    }
    return 1;
}
int main()
{
    int n,k,t;
    cin>>n>>k>>t;
    Bar(n,k,t);
	return 0;
}
