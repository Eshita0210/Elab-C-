#include <iostream>
using namespace std;
class Toll
{
    public:
    int cars;
    float tollcollected;
    Toll(){
        cars=0;
        tollcollected=0;
    }
    void payingcar(double pay){
        cars++;
        tollcollected+=pay;
    }
    void nonpayingcar(){
        cars++;
    }
    void display(){
        cout<<cars<<endl<<tollcollected<<endl;
    }
};
int main()
{
    Toll obj;
    char VehicleNo[10];
    float TollAmt;
    int carpassed,i;
    cin>>carpassed;
    for(i=0;i<carpassed;i++)
    {
        cin>>VehicleNo>>TollAmt;
        if(TollAmt>0) obj.payingcar(TollAmt);
        else obj.nonpayingcar();
    }
    obj.display();
	return 0;
}
