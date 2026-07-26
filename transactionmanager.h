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
    void SetTransaction(Transaction t);
    const Transaction* GetTransaction(size_t num);
    const std::vector<Transaction>& GetTransactionVector() const;
    bool RemoveTransaction(size_t num);


private:
    std::vector<Transaction> _transactions;
};

#endif // TRANSACTIONMANAGER_H
