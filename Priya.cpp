#include <iostream>
using namespace std;
class ReceiveMesurement{
    public:
    int l,b;
    void display(){
        cin>>l>>b;
        cout<<"Length:"<<l<<" metres"<<endl;
        cout<<"Breadth:"<<b<<" metres";
    }
};
class FormatMesurement : public ReceiveMesurement{
};
int main()
{
    FormatMesurement mt;
    mt.display();
	return 0;
}
