#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector(5, 10086);
    vector.push_back(9);
    // vector.erase(vector.begin() + 4);
    cout << "Vector size:" << vector.size() << endl;
    for (size_t i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << endl;
    }

    return 0;
}
