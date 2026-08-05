#include "transactionmanager.h"
#include "./CommonStructs.h"
#include <algorithm>

TransactionManager::TransactionManager()
{
    _transactions.clear();
}

void TransactionManager::SortByDate(bool ascending)
{
    std::sort(_transactions.begin(),
              _transactions.end(),
              [ascending](const Transaction& a, const Transaction& b)
              {
                  if(ascending)
                      return a.date < b.date;
                  else
                      return a.date > b.date;
              });
}

void TransactionManager::AddTransaction(const Transaction &t)
{
    _transactions.push_back(t);
}

void TransactionManager::AddTransaction(const std::vector<Transaction> transactions)
{
    size_t size = transactions.size();
    for(size_t i = 0; i < size; i++)
    {
        AddTransaction(transactions[i]);
    }
}

void TransactionManager::SetTransaction(int id, Transaction t)
{
    auto it = std::find_if(_transactions.begin(), _transactions.end(), [id](const Transaction& t){return t.id == id;});

    if(it != _transactions.end())
        *it = t;
}
const Transaction* TransactionManager::GetTransaction(int id)
{
    auto it = std::find_if(_transactions.begin(), _transactions.end(), [id](const Transaction& t){return t.id == id;});

    if(it != _transactions.end())
        return &(*it);

    return nullptr;
}

const std::vector<Transaction> &TransactionManager::GetTransactionVector() const
{
    return _transactions;
}

bool TransactionManager::RemoveTransaction(int id)
{
    auto it = std::find_if(_transactions.begin(), _transactions.end(), [id](const Transaction& t){return t.id == id;});

    if(it != _transactions.end())
    {
        _transactions.erase(it);
        return true;
    }

    return false;
}