#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include "ServiceFunction.hpp"

extern size_t usersize;
extern size_t currentId;
extern std::wstring currentStatus;


extern std::wstring* loginArr;
extern std::wstring* passArr;
extern std::wstring* statusArr;
extern size_t* userIdArr;

extern size_t maxLogin;
extern size_t minLogin;
extern size_t maxPass;
extern size_t minpass;


extern std::unordered_set<wchar_t> loginSymbols;
extern std::unordered_set<wchar_t> passSymbols;

void ChangeAccount();
void CreateNewAccount();






#endif // !_ACCOUNT_HPP_