#include <iostream>

using namespace std;

int main() {
    int a[] = {1, 3, 5, 7};
    int (&b)[4] = a;
    cout << "b[]:" << b << endl;
    for (size_t i = 0; i < 4; i++)
    {
        cout << "b[" << i << "] = " << b[i] << endl;
    }
    
    return 0;
}