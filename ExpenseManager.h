#ifndef EXPENSEMANAGER_H
#define EXPENSEMANAGER_H

#include <iostream>
using namespace std;

class Expense {
private:
    string category;
    double amount;
    string date;

public:
    // Constructors
    Expense() {
        category = "Unknown";
        amount = 0;
        date = "N/A";
    }

    Expense(string c, double a, string d) {
        category = c;
        amount = a;
        date = d;
    }

    // Function Overloading
    void setExpense() {
        category = "Misc";
        amount = 0;
        date = "N/A";
    }

    void setExpense(string c, double a) {
        category = c;
        amount = a;
        date = "Not Set";
    }

    void setExpense(string c, double a, string d) {
        category = c;
        amount = a;
        date = d;
    }

    // Operator Overloading
    Expense operator+(const Expense& e) {
        return Expense("Combined", amount + e.amount, "N/A");
    }

    Expense operator-(const Expense& e) {
        return Expense("Difference", amount - e.amount, "N/A");
    }

    bool operator==(const Expense& e) {
        return amount == e.amount;
    }

    // Friend Output Operator
    friend ostream& operator<<(ostream& out, const Expense& e) {
        out << "Category: " << e.category << endl;
        out << "Amount: " << e.amount << endl;
        out << "Date: " << e.date << endl;
        return out;
    }
};

#endif
