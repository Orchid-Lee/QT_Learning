#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

class Box
{
public:
    double length;
    double width;
    double height;
private:
    int id;
};


int main()
{
    time_t now = time(0);
    char* str = ctime(&now);
    cout << "T:" << str << endl;
    return 0;
}
