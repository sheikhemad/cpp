#include <iostream>
#include <stdlib.h>
using namespace std;

double calculate_SalesTax(double mealPrice)
{
    if(mealPrice <= 1000)
    {
        return 0;
    }
    else if(mealPrice > 1000 && mealPrice <= 2000)
    {
        return (mealPrice / 100) * 1;
    }
    else
    {
        return (mealPrice / 100) * 2;
    }
}


double calculateTotalAmount(double mealPrice, double salesTax)
{
    return mealPrice + salesTax;
}


void calculateSweetDish(double totalAmount)
{
    if(totalAmount < 1000)
    {
        cout << "This Person should be served with candies";
    }
    else if(totalAmount >= 1000 &&  totalAmount < 2000)
    {
        cout << "This Person should be served with Sweet Bread";
    }
    else if(totalAmount >= 2000 && totalAmount < 3000)
    {
        cout << "This Person should be served with Pudding";
    }
    else if(totalAmount >= 3000 && totalAmount < 4000)
    {
        cout << "This Person should be served with Cake";
    }
    else
    {
        cout << "This Person should be served with Triffle";
    }
}
int main ()
{
    double mealPrice;
    double salesTax;
    double totalAmount;
    char userChoice;

    // for keeping records of customers
    int noOfCustomers = 0;
    double totalBill = 0;

    do
    {
        system("cls");

        cout << "*** Virtual Restaurant *** \n\n";
        cout << "Enter the price of the meal: ";
        cin >> mealPrice;

        salesTax = calculate_SalesTax(mealPrice);

        cout << "\n\nPrice of Meal: " << mealPrice;
        cout << "\nSales Tax: " << salesTax;
        cout << "\n------------------\n";

        totalAmount = calculateTotalAmount(mealPrice, salesTax);

        // sum up total amounts
        totalBill += totalAmount;

        cout << "Total Amount: " << totalAmount;
        cout << "\n\n";
        calculateSweetDish(totalAmount);

        // increment customer
        noOfCustomers++;

        cout << "\n\nDo you want to process another Customer?\n\n";
        cout << "Enter 'y' for Yes or 'n' to exit >: ";
        cin >> userChoice;
    }
    while(userChoice == 'y' || userChoice == 'Y');

    cout << "\n\nGrand Totals\n\n";
    cout << "Total Customers: " << noOfCustomers;
    cout << "\nTotal amount of all Bills: " << totalBill;
}
