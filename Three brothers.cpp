#include <iostream>
using namespace std;

int main() {    
    int bro1, bro2, bro3;
    cin>>bro1>>bro2>>bro3;

    if(bro1 >= bro2 && bro1 >= bro3)
        cout << bro1;

  else if(bro2 >=bro1 && bro2 >= bro3)
        cout << bro2;
    
 else
        cout << bro3;
  
    return 0;
}
