#include <iostream>
using namespace std;

int sumUp(int x, int y)
{
    return x + y;
}

int main()
{
    // to print something
    cout << 5;
    // 5 will be printed on screen
    cout << 5 << endl;
    // you can use endl to give a line gap

    cout << "hi" << endl;
    // string are written inside double quotes

    // variable are used to store data
    int age = 22;
    // variable name "age" of type integer with value 22

    cout << age << endl;
    // you can print value of variable as well

    int x = 5;
    int y = 6;

    int z = x + y;
    // you can apply basic mathematics on variables

    // conditions

    if(x > y)
    {
        cout << "x is greater than y";
    }
    else
    {
        cout << "y is greater than x";
    }

    // loops are used to execute instructions multiple times

    for(int i = 0;i < 5; i++)
    {
        cout << "Hi rizwan\n";
    }

    // pointers
    // pointer is a special variable that holds memory address
    int rizwan_age = 25;
    int *xPtr = &rizwan_age;
    // we take address using & operator


}
