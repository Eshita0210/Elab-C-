#include <iostream>
#include <iomanip>
//using namespace std;

int main()
{float num1,num2;
//std::setprecision(6);
    std::cin>>num1>>num2;
    double resnum1,resnum2;
    resnum1=num1;
    resnum2=num2;
    std::setprecision(6);
    std::cout<<std::fixed<<resnum1<<'\n'<<resnum2;

    return 0;
}
