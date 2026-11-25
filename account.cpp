#include "account.hpp"

size_t usersize = 3;
size_t currentId = 0;
std::wstring currentStatus;
 
std::wstring* loginArr = new std::wstring[usersize]{ L"admin", L"adminsm", L"user2" };
std::wstring* passArr = new std::wstring[usersize]{ L"admin", L"adminsm", L"user2" };
std::wstring* statusArr = new std::wstring[usersize]{ L"Superadmin", L"Admin", L"user" };
size_t* userIdArr = new size_t[usersize]{0,1,2};




size_t maxLogin = 12;
size_t minLogin = 5;
size_t maxPass = 14;
size_t minpass = 8;






void ChangeAccount()
{
	std::wstring choose;
	while (true)
	{
		system("cls");
		std::wcout << L"Редактирвоания склада\n";
		std::wcout << L"1 - Создать аккаунт\n";
		std::wcout << L"2 - Показать всех сотрпудников\n";
		std::wcout << L"3 - Изменить пароль\n";
		std::wcout << L"4 - Изменить уровни доступа\n";
		std::wcout << L"5 - Редактировать премии и штрафы сотрудников\n";
		std::wcout << L"6 - Удалить аккаунт\n";
		std::wcout << L"0 - Выход\n";
		std::wcout << L"Ввод: ";
		Getline(choose);

		if (choose == L"1")
		{
			
		}
		else if (choose == L"2")
		{
			
		}
		else if (choose == L"3")
		{
			
		}
		else if (choose == L"4")
		{
			
		}
		else if (choose == L"5")
		{

		}
		else if (choose == L"6")
		{

		}
		else if (choose == L"0")
		{
			std::wcout << L"Выход из редактора аккаунтов";
			Sleep(1500);
			break;
		}
		else
		{
			Err();
		}
	}

}
void CreateNewAccount()
{
	std::wstring chooseLogin, choosePass, chooseStatis, choose;
}


