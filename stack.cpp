
// stack::size
#include <iostream>       // std::cout
#include <stack>          // std::stack
using std::cout;

void  myStack()
{
    std::stack<int> myValues;

   cout << "0. size: " << myValues.size() << '\n';

    for (int i=0; i<5; i++){
        myValues.push(i);
    }

    cout << "1. size: " << myValues.size() << '\n';

    myValues.pop();

    cout << "2. size: " << myValues.size() << '\n';


}