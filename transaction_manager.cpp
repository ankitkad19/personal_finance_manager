#include "transaction_manager.h"
#include <iostream>

void addTransaction(std::vector<Transaction>& transactions, double amount, const std::string& category, const std::string& date) {
    Transaction transaction = { amount, category, date };
    transactions.push_back(transaction);
}

void viewTransactions(const std::vector<Transaction>& transactions) {
    for (const auto& transaction : transactions) {
        std::cout << "Amount: " << transaction.amount
                  << ", Category: " << transaction.category
                  << ", Date: " << transaction.date << std::endl;
    }
}
