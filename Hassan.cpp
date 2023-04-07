#include <iostream>
using namespace std;

class Phone
{
    public:
    char n[14];
    void change()
    {
        cin>>n;
        n[0]='1';
        cout<<'9'<<n;
    }
};

int main()
{
    Phone obj;
    obj.change();
	return 0;
}
