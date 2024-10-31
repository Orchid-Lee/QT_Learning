#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    double *ap = NULL;
    ap = new double;
    *ap = 3.1415926;
    delete ap;
    ap = NULL;
    cout << *ap << endl;
    return 0;
}
