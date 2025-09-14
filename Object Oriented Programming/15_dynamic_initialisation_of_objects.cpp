#include <bits/stdc++.h>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}

    // interest rate as decimal (e.g., 0.05 for 5%)
    BankDeposit(int p, int y, float i)
    {
        cout << "Float constructor called" << endl;
        principal = p;
        years = y;
        interestRate = i;
        returnValue = principal;
        for (int j = 0; j < years; j++)
        {
            returnValue = returnValue * (1 + interestRate);
        }
    }

    // interest rate as percentage (e.g., 5 for 5%)
    BankDeposit(int p, int y, int i)
    {
        cout << "Int constructor called" << endl;
        principal = p;
        years = y;
        interestRate = float(i) / 100;
        returnValue = principal;
        for (int j = 0; j < years; j++)
        {
            returnValue = returnValue * (1 + interestRate);
        }
    }

    void show()
    {
        cout << "\nPrincipal = " << principal
             << "\nYears = " << years
             << "\nReturn Value = " << returnValue << endl;
    }
};

// dynamic initialisation of objects
// done at the run time
int main()
{
    int p, y;
    cout << "Enter principal : ";
    cin >> p;
    cout << "Enter years : ";
    cin >> y;

    cout << "Enter interest rate (either decimal like 0.05 or whole  like 5): ";
    string rate;
    cin >> rate;

    // check if input contains a decimal point
    if (rate.find('.') != string::npos)
    {
        float r = stof(rate);
        BankDeposit bd1(p, y, r);
        bd1.show();
    }
    else
    {
        int r = stoi(rate);
        BankDeposit bd2(p, y, r);
        bd2.show();
    }

    return 0;
}
