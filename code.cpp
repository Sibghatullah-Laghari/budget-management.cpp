/*
 * budget-management.cpp
 * Simple personal budget tracker – calculates savings after expenses.
 * Last updated: 2026-07-18
 *
 * This program takes total monthly income and expense categories
 * (groceries, entertainment, education) and computes total expenses
 * and net savings.
 *
 * Future improvements:
 *   - Add input validation to ensure total expenses ≤ income.
 *   - Store multiple months for trend analysis.
 *   - Save data to a file for persistence.
 */

#include <iostream>
using namespace std;

int main() {
    // Declare variables with descriptive names
    double income;          // total monthly income
    double groceries;       // grocery expenses
    double entertainment;   // entertainment expenses
    double education;       // education costs
    double totalExpenses;   // sum of all expenses
    double savings;         // leftover amount

    // Get income from user
    cout << "Enter your total monthly income (e.g., 1930000): ";
    cin >> income;

    // Get expense categories
    cout << "Enter your expenses for groceries, entertainment, and education respectively:" << endl;
    cout << "Groceries: ";
    cin >> groceries;
    cout << "Entertainment: ";
    cin >> entertainment;
    cout << "Education: ";
    cin >> education;

    // Calculate total expenses
    totalExpenses = groceries + entertainment + education;

    // Display total expenses
    cout << "Your total expenses are: " << totalExpenses << endl;

    // Check if expenses exceed income (simple warning)
    if (totalExpenses > income) {
        cout << "Warning: Your total expenses exceed your income!" << endl;
    }

    // Compute savings
    savings = income - totalExpenses;

    // Show result
    cout << "Your savings amount is: " << savings << endl;

    return 0;
}
