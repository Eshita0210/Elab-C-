#include <iostream>
using namespace std;
template <class LackofSleep>
LackofSleep Counting(LackofSleep k,LackofSleep l,LackofSleep m,LackofSleep n,LackofSleep d)
{
    int c=0;
    for(int i=0;i<=d;i++){
        if(i%k==0||i%l==0||i%m==0||i%n==0)
        c++;
    }
    return c-1;
}
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    cout<<Counting(k,l,m,n,d);
	return 0;
}
