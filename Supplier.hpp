#ifndef _SUPPLIER_HPP_
#define _SUPPLIER_HPP_

#include "ServiceFunction.hpp"

extern size_t supplierSize;
extern size_t* supplierIdArr;
extern std::wstring* supplierNameArr;
extern size_t* supplierCountArr;
extern double* supplierPriceArr;
extern bool isSupplierCreated;

void CreateSupplier();
void ShowSupplier(int mode = 0);
bool SellToShop(size_t id, size_t count);

#endif
// спросить фарита правильно ли все