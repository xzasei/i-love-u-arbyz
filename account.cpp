#include "account.hpp"

size_t usersize = 3;
size_t currentId = 0;
std::wstring currentStatus;
 
std::wstring* loginArr = new std::wstring[usersize]{ L"admin", L"adminsm", L"user2" };
std::wstring* passArr = new std::wstring[usersize]{ L"admin", L"adminsm", L"user2" };
std::wstring* statusArr = new std::wstring[usersize]{ L"Superadmin", L"Admin", L"user" };
size_t* userIdArr = new size_t[usersize]{0,1,2};
