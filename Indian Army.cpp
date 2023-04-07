#include <iostream>
#include<iomanip>
using namespace std;
class IndianArmy{
    long double n;
    public:int ResumesofCamdidates(){
        cin>>n;
        long long k;
        k=(long long)(((n*(n-1)*(n-2)*(n-3)*(n-4))/120)+((n*(n-1)*(n-2)*(n-3)*(n-4)*(n-5))/720)+((n*(n-1)*(n-2)*(n-3)*(n-4)*(n-5)*(n-6))/5040));
        cout<<fixed<<setprecision(0)<<k;
        return 0;
    }
    
};
int main()
{   IndianArmy GroupingofResumes;
    GroupingofResumes.ResumesofCamdidates();
	return 0;
}
