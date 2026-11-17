#ifndef _SERVICE_FUNCTIONS_HPP_
#define _SERVICE_FUNCTIONS_HPP_
#include <Windows.h>
#include <iostream>
#include <string>
#include <iomanip>

void Getline(std::wstring& str, wchar_t ch = L'\n');

template <class ArrType>
void FillArray(ArrType* dynamicArr, ArrType* staticArr, size_t commonSize)
{
	for (size_t i = 0; i < commonSize; i++)
	{
		dynamicArr[i] = staticArr[i];
	}
}
inline void Err()
{
	std::wcout << L"Некорекктный ввод\n\n";
	Sleep(1500);
}




#endif // !_SERVICE_FUNCTIONS_HPP_
