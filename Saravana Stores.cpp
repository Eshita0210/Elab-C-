#include <iostream>
using namespace std;
class Salary
{public:void Increment(int cursal, int bonus)
    {int x;
     x=cursal+bonus;
     cout<<x<<endl;}
    void Increment(int cursal)
    {
     cout<<cursal<<endl;}
};
     
int main()
{int cursal,bonus,sal;
    Salary empsal;
    cin>>cursal>>sal>>bonus;
empsal.Increment(cursal);
empsal.Increment(cursal,bonus);
	return 0;
}
