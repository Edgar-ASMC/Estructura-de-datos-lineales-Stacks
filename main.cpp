//Edgar Añorve Magaña
//A01645261

#include <iostream>
#include "Stack.h"

using namespace std;
int main()
{
    Stack stack;

    stack.push(30);
    stack.push(50);
    stack.push(70);

    stack.pop();
    cout << "El elemento depues del pop: " << stack.top();
    return 0;
}
