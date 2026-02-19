#include <iostream>
using namespace std;
int main() {
    char grade;
    int years;
    double basic_salary = 0, bonus = 0, tax = 0, gross_salary, net_salary;
    cout << "Enter employee grade (A, B, C): ";
    cin >> grade;
    cout << "Enter years of service: ";
    cin >> years;
    // Basic Salary
    if (grade == 'A') basic_salary = 50000;
    if (grade == 'B') basic_salary = 30000;
    if (grade == 'C') basic_salary = 20000;
    // Bonus
    if (years >= 10) bonus = 0.10 * basic_salary;
    if (years >= 5 && years <= 9) bonus = 0.05 * basic_salary;
    if (years < 5) bonus = 0;
    gross_salary = basic_salary + bonus;
    // Tax
    if (gross_salary > 40000) tax = 0.20 * gross_salary;
    if (gross_salary >= 30000 && gross_salary <= 40000) tax = 0.10 * gross_salary;
    if (gross_salary < 30000) tax = 0;
    net_salary = gross_salary - tax;
    cout << "Basic Salary: " << basic_salary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Gross Salary: " << gross_salary << endl;
    cout << "Tax Deducted: " << tax << endl;
    cout << "Net Salary: " << net_salary << endl;
    return 0;
}
