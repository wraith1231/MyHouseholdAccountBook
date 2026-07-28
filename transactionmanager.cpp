#include "transactionmanager.h"
#include "./CommonStructs.h"

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
    auto tr = t;
    tr.id = _nextid++;
    _transactions.push_back(tr);
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
        return it.base();

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