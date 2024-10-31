#include <iostream>

using namespace std;

template <typename T>
T const &Max(T const &a, T const &b)
{
    return a > b ? a : b;
};

template <class T> 
class Box
{
public:
    T a;
};

int main()
{
    int x = 12;
    int y = 14;
    cout << "result:" << Max(x, y) << endl;

    Box<int> box;
    box.a = 12;
    cout << "box.a = " << box.a << endl;
    return 0;
}
