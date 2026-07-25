#ifndef TRANSACTIONMANAGER_H
#define TRANSACTIONMANAGER_H
#include <vector>

struct Transaction;

class TransactionManager
{
public:
    TransactionManager();

    void AddTransaction(const Transaction& t);
    void SetTransaction(Transaction t);
    const Transaction* GetTransaction(size_t num);
    bool RemoveTransaction(size_t num);
private:
    std::vector<Transaction> _transactions;
};

#endif // TRANSACTIONMANAGER_H
