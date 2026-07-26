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
    _transactions.push_back(t);
}

void TransactionManager::SetTransaction(Transaction t)
{

}
const Transaction* TransactionManager::GetTransaction(size_t num)
{
    if(num >= _transactions.size())
        return nullptr;                     //호출하는 쪽에서 오류 messagebox 띄우는 작업 해줘야함

    return &_transactions[num];
}

const std::vector<Transaction> &TransactionManager::GetTransactionVector() const
{
    return _transactions;
}

bool TransactionManager::RemoveTransaction(size_t num)
{

}