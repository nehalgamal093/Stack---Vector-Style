#include <iostream>
#include "Stack.h"
using namespace std;


int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);
   cout << s.getSize();
 
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}

