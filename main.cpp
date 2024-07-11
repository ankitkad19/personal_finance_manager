#include <iostream>
#include <vector>
#include "transaction_manager.h"

int main() {
    std::vector<Transaction> transactions;
    int choice;

    while (true) {
        std::cout << "1. Add Transaction\n";
        std::cout << "2. View Transactions\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            double amount;
            std::string category, date;
            
            std::cout << "Enter amount: ";
            std::cin >> amount;
            std::cout << "Enter category: ";
            std::cin >> category;
            std::cout << "Enter date (YYYY-MM-DD): ";
            std::cin >> date;

            addTransaction(transactions, amount, category, date);
            std::cout << "Transaction added successfully!\n";
        } else if (choice == 2) {
            viewTransactions(transactions);
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

