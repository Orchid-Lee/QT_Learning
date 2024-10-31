#include <iostream>

using namespace std;

class Box
{
protected:
    double len;
    double wid;
    double hei;

public:
    virtual double area() = 0;
};

class Rect: public Box
{
public:
    double area()
    {
        cout << "sub area." << endl;
        return 0;
    };
};

int main()
{
    Box *box;
    Rect rect;
    box = &rect;
    cout << "rect:" << box->area() << endl;
    return 0;
}
