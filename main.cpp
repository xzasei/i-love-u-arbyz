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


	return 0;
}