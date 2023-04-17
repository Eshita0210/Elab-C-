#include <iostream>
using namespace std;
class Salary{public:
int deftsalary;
Salary(){deftsalary=10000;cout<<deftsalary<<endl;}
    Salary(int sal)
    {cout<<sal;}};

int main()
{int sal;
cin>>sal;
Salary deftsalary;
Salary ExpectedSalary(sal);
	return 0;
}
