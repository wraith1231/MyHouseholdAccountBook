#ifndef TRANSACTIONMANAGER_H
#define TRANSACTIONMANAGER_H
#include <vector>

struct Transaction;

class TransactionManager
{
public:
    TransactionManager();
    void SortByDate(bool ascending = true);

    void AddTransaction(const Transaction& t);
    void SetTransaction(int id, Transaction t);
    const Transaction* GetTransaction(int id);
    const std::vector<Transaction>& GetTransactionVector() const;
    bool RemoveTransaction(int id);


private:
    std::vector<Transaction> _transactions;
    int _nextid = 1;
};

#endif // TRANSACTIONMANAGER_H
