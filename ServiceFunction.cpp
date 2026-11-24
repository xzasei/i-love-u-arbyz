#include "ServiceFunction.hpp"

void Getline(std::wstring& str, wchar_t ch)
{
	std::getline(std::wcin, str, ch);
}

bool Isnumber(const std::wstring& str)
{
	if (str.size() <= 0 || str.size() >= 10)
	{
		std::wcout << L"Ошибка длины. Максимум 9";
		Sleep(1500);
		return false;
	}
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::iswdigit(str[i]))
		{
			std::wcout << L"Введённые данные не являются числом\n\n";
			Sleep(1500);
			return false;
		}
	}
	return true;

	

}

bool IsNotname(const std::wstring& str, std::wstring* nameArr, size_t ArrSize)
{
	for (size_t i = 0; i < ArrSize; i++)
	{
		if (nameArr[i] == str)
		{
			return false;
		}
	}
	return true;
}
