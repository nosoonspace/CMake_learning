#include <iostream>
#include "process.h"
using std::cout;
using std::endl;

int main()
{
    cout << "Planning  Start!" << endl;
    Process pro;
    pro.planProcess();
    cout << "Planning  End!" << endl;

    return 0;
}