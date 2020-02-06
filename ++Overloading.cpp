#include <iostream>
using namespace std;
class Check
{
private:
    int i;
public:
//constructor initializing value To zero
    Check(): i(0) {  }
    void operator ++()
    {
        ++i;
    }
    void Display()
    {
        cout << "i=" << i << endl;
    }
};
int main()
{
    Check obj;
    // Displays the value of data member i for object obj
    obj.Display();
    // Invokes operator function void operator ++( )
    ++obj;

    // Displays the value of data member i for object obj
    obj.Display();
    return 0;
}
