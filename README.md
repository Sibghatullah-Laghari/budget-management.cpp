/*
 * budget-management.cpp
 * Simple personal budget tracker.
 * Last updated: 2026-07-18.
 *
 * This program allows users to add income/expense transactions,
 * view the current balance, and list all recorded transactions.
 * Data is stored in memory (not persisted across runs).
 *
 * Future improvements:
 *   - Save/load transactions to/from a file.
 *   - Categorize transactions (e.g., Food, Transport, Entertainment).
 */

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Structure to hold a single transaction
struct Transaction {
    string description;
    double amount;      // positive for income, negative for expense
    string date;        // simple date string (YYYY-MM-DD)
};

// Global list of transactions
vector<Transaction> transactions;

// Function prototypes
void addTransaction();
void showBalance();
void listTransactions();
void showMenu();

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        cin.ignore(); // clear newline from input buffer

        switch (choice) {
            case 1:
                addTransaction();
                break;
            case 2:
                showBalance();
                break;
            case 3:
                listTransactions();
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

void showMenu() {
    cout << "\n===== Budget Management =====" << endl;
    cout << "1. Add Transaction" << endl;
    cout << "2. Show Balance" << endl;
    cout << "3. List Transactions" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

void addTransaction() {
    Transaction t;
    cout << "Enter description: ";
    getline(cin, t.description);

    cout << "Enter amount (positive for income, negative for expense): ";
    cin >> t.amount;
    cin.ignore();

    cout << "Enter date (YYYY-MM-DD): ";
    getline(cin, t.date);

    transactions.push_back(t);
    cout << "Transaction added successfully!" << endl;
}

void showBalance() {
    double balance = 0.0;
    for (const auto& t : transactions) {
        balance += t.amount;
    }
    cout << fixed << setprecision(2);
    cout << "Current balance: $" << balance << endl;
}

void listTransactions() {
    if (transactions.empty()) {
        cout << "No transactions recorded yet." << endl;
        return;
    }

    cout << "\n===== Transaction History =====" << endl;
    cout << left << setw(15) << "Date" << setw(25) << "Description" << setw(10) << "Amount" << endl;
    cout << string(50, '-') << endl;

    for (const auto& t : transactions) {
        cout << left << setw(15) << t.date
             << setw(25) << t.description
             << setw(10) << fixed << setprecision(2) << t.amount << endl;
    }
}
