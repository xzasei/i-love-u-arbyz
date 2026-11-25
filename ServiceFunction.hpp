#ifndef _SERVICE_FUNCTIONS_HPP_
#define _SERVICE_FUNCTIONS_HPP_
#include <Windows.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <cwctype>
#include <unordered_set>

void Getline(std::wstring& str, wchar_t ch = L'\n');
bool Isnumber(const std::wstring& str);
bool IsNotname(const std::wstring& str, std::wstring* nameArr, size_t ArrSize);


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

template <class ArrType>
void ArrPushBack(ArrType*& arr, size_t arrSize)
{
	arrSize++;
	ArrType *temp = new ArrType[arrSize];
	for (size_t i = 0; i < arrSize - 1; i++)
	{
		temp[i] = arr[i];
	}
	std::swap(arr, temp);
	delete[]temp;
}

template <class ArrType>
void ArrDeleteByIndex(ArrType*& arr, size_t ArrSize, size_t index)
{
	ArrSize--;
	ArrType* temp = new ArrType[ArrSize];
	for (size_t i = 0, j = 0; i < ArrSize; i++, j++)
	{
		if (j == index)
		{
			j++;
		}
		temp[i] = arr[j];
	}
	std::swap(arr, temp);
	delete[]temp;
}



#endif // !_SERVICE_FUNCTIONS_HPP_
