#include <iostream>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    // default constructor
    Date()
    {
        day = 20;
        month = 4;
        year = 1998;
    }

    // parametrized constructor
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void printDate()
    {
        cout << "Date : " << day << "/" << month << "/" << year << endl;
    }

    void setDay(int d)
    {
        day = d;
    }
    void setMonth(int m)
    {
        month = m;
    }

    void setYear(int y)
    {
        year = y;
    }
    
    // default destructor
    ~Date()
    {
        
    }
};

int main()
{
    Date d(1, 1, 2020);
    d.printDate();
    d.setDay(20);
    d.printDate();
}
