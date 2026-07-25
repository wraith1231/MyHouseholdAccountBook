#include "transactionmanager.h"
#include "./CommonStructs.h"

TransactionManager::TransactionManager()
{
    _transactions.clear();
}

void TransactionManager::AddTransaction(const Transaction &t)
{

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

bool TransactionManager::RemoveTransaction(size_t num)
{

}