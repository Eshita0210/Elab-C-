#include <bits/stdc++.h>
using namespace std;
class Artists {
    public:virtual void Calls()=0;
};
class Kill:public Artists{
    public:
    void Calls(){
        int n,m,z;
        cin>>n>>m>>z;
        int lcm = (n * m) / __gcd(n, m);
        cout<<z/lcm;
    }
};
int main()
{
    Kill obj;
    obj.Calls();
    return 0;
}
