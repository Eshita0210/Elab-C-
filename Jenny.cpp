#include <iostream>
using namespace std;
class Happiness{
    public:int Meat(){
        int n,a,b,max=100,sum=0;
        cin>>n;
        while(n--)
        {
        cin>>a>>b;
            
            if(b>=max)
            
            sum+=a*max;
            
            else
            {
                max=b;
                sum+=a*b;
            }
        }
        return sum;
        
        }
};
int main(){
    Happiness Purchase;
    cout<<Purchase.Meat();
}
