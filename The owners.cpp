#include <iostream>
using namespace std;
const int I=0x3f3f3f3f;
template <class Cow>
    Cow Moves(Cow n){
        Moves(n);
    }
int main() {
    int a,b,c,d,x,y,n;
    a=b=c=d=-I;
    cin>>n;
    while(n--){
    cin>>x>>y;
    a=max(a,x+y);
    b=max(b,x-y);
    c=max(c,y-x);
    d=max(d,-x-y);
    }
    cout<<a+b+c+d+4;return 0;
}
