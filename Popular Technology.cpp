#include <bits/stdc++.h>
using namespace std;
class Employees{
    public:virtual void BuyingGame()=0;
};
class Reward:public Employees{
    public:
    int n;
    void BuyingGame(){
        cin>>n;
        cout<<n - n / 2 - n / 3 - n / 5 - n / 7
		+ n / 6 + n / 10 + n / 14 + n / 15 + n / 21 + n / 35
		- n / 30 - n / 42 - n / 70 - n / 105 + n / 210;
        
    }
};
int main()
{
	Reward obj;
	obj.BuyingGame();
	return 0;
}
