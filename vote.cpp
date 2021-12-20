#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age to check the eligibility to vote" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible to vote" << endl;
    }
    else
    {
        cout << "You are not eligible to vote" << endl;
        cout << "Wait for " << 18 - age << "years to get eligibility to vote" << endl;
    }
    return 0;
}
//created by Ankita Mohan
