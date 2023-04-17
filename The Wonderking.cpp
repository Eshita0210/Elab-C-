#include<iostream>
using namespace std;
class compare{
    public:
    int first,sum1=0;
    compare(int x){
        first=x;
    }
    void f(){
        //first1=first;
        for(int i=1; i<=first/2 ; i++)
        {
            //finding and adding divisors of first number
            if(first%i==0)
                sum1=sum1+i;
        }
    }


    void operator ==(compare t2){
        if(first==t2.sum1 && t2.first==sum1)
        cout<<"Friendly Pair";
        else
        cout<<"Not a Friendly Pair";
    }
};
    //main program
    int main()
    {
        int first,second;
        //user input
        cin>>first;
        //user input
        cin>>second;
        compare t1(first),t2(second);
        t1.f();
        t2.f();
        t1==t2;
        return 0;
    }
