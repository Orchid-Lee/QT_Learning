#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Box
{
public:
    double length;
    double width;
    double height;
    double calc(Box *box);
    Box();                  
    Box(double len, double wid, double hei);
    ~Box();

private:
    int id;
};

Box::Box()
{
    cout << "Box init()" << endl;
};

Box::~Box()
{
    cout << "obj del." << endl;
};

Box::Box(double len, double wid, double hei):length(len), width(wid), height(hei)
{
};

double Box::calc(Box *box)
{
    return box->length * box->height * box->width;
};

class House: public Box
{
};


int main()
{
    House house;
    house.length = 12;
    house.width = 12;
    house.height = 1;
    cout << "calc:" << house.calc(&house) << endl;
    return 0;
}
