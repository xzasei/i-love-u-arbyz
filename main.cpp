#include <iostream>
#include <io.h> // _setmod, _fileno
#include <fcntl.h> // _O_U16TEXT
#include <Windows.h>
#include <string>
#include <limits>
#include "authorization.hpp"

/*
 

	std::string --> std::wstring
	char --> wchat_t
	std::cout --> std::wcout L" "
	std::cin --> std::wcin L" "
	std:getline
	std::endl;
	"text" --> L"text"
	'\n' --> L'\n'
*/


int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	Start();

	delete[] loginArr;
	delete[] passArr;
	delete[] statusArr;
	delete[] userIdArr;

	if (isStorageCreated)
	{
		delete[]idArr;
		delete[]nameArr;
		delete[]countArr;
		delete[]priceArr;
	}

	// спросить фарита правильно ли
	if (isSupplierCreated)
	{
		delete[] supplierIdArr;
		delete[] supplierNameArr;
		delete[] supplierCountArr;
		delete[] supplierPriceArr;
	}


	return 0;
}