#include <iostream>
using namespace std;
class Bank
{
    int total;
    public:
    void totalMoney(int n)
    {
        int r;
        r = n%7;
        n/=7;
        total =(n*(49+(7*n)))/2 + r*(2*(n+1)+r-1)/2;
        cout<<total;
    }
};
int main(){
    int n;
    cin>>n;
    Bank CalculateMoney;
    CalculateMoney.totalMoney(n);
	return 0;
}
