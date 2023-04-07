#include <iostream>
using namespace std;
class ChangeBase
{
    public: void sumBase(int n,int k)
  {
      int s;
      while(n>0)
      {
          s=s+n%k;
          n/=k;
      }
      cout<<s;
  }
};
int main()
{   int n,k;
    cin>>n>>k;
    ChangeBase Convert;
    Convert.sumBase(n,k);
	return 0;}
