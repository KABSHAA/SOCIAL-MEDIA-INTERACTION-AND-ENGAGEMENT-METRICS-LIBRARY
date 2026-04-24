#include "ExpenseManager.h"

int main() {

    Expense e1, e2, e3;

    // Function Overloading Demo
    e1.setExpense();
    e2.setExpense("Food", 500);
    e3.setExpense("Transport", 300, "2026-04-22");

    cout << "Expense 1:\n" << e1 << endl;
    cout << "Expense 2:\n" << e2 << endl;
    cout << "Expense 3:\n" << e3 << endl;

    // Operator Overloading Demo
    Expense total = e2 + e3;
    Expense diff = e2 - e3;

    cout << "Total Expense:\n" << total << endl;
    cout << "Difference:\n" << diff << endl;

    if (e2 == e3) {
        cout << "Expenses are equal\n";
    } else {
        cout << "Expenses are not equal\n";
    }

    return 0;
}
