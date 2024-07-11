#ifndef TRANSACTION_MANAGER_H
#define TRANSACTION_MANAGER_H

#include <vector>
#include <string>

struct Transaction {
    double amount;
    std::string category;
    std::string date;
};

void addTransaction(std::vector<Transaction>& transactions, double amount, const std::string& category, const std::string& date);
void viewTransactions(const std::vector<Transaction>& transactions);

#endif
