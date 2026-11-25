#include "authorization.hpp"

void Start()
{
	while (true)
	{
		if (Login())
		{
			if (currentStatus == L"Superadmin")
			{
				CreateStorage();
				SuperAdminMenu();
			}
			else if (currentStatus == L"Admin")
			{
				//todo
			}
			else if (currentStatus == L"user")
			{
				// todo
			}
			else
			{
				std::wcout << L"\n\n_CURRENT_STATUS_LOGIN_ERROR_\n\n";
			}
		}
		else
		{
			system("cls");
			std::wcout << L"Прощай не арбуз";
			Sleep(1500);
			break;

		}
	}
}
bool Login()
{
	std::wstring login, pass;
	while (true)
	{
		system("cls");
		std::wcout << L"\n\n\tДобро пожаловать в";
		std::wcout << L"\n\n\t    Watermelon\n\n";
		std::wcout << L"\n\nВвод логин или \"exit\" для выхода\n";
		std::wcout << L"Введите логин: ";
		Getline(login);

		if (login == L"exit" || login == L"Exit")
		{
			return false;
		}
		else
		{
			std::wcout << L"Введите пароль: ";
			Getline(pass);
			for (size_t i = 0; i < usersize; i++)
			{
				if (login == loginArr[i] && pass == passArr[i])
				{
					std::wcout << L"Добро пожаловать " << loginArr[i] << L"\n";
					std::wcout << L"Ваш уровень доступа " << statusArr[i] << L"\n";
					currentId = userIdArr[i];
					currentStatus = statusArr[i];
					Sleep(2500);
					return true;
				}
			}
			std::wcout << L"Неверный логин или пароль. Повторите попытку";
			Sleep(1500);
		}
	}
}
void SuperAdminMenu()
{
	std::wstring choose;
	while (true)
	{
		system("cls");
		std::wcout << L"1 - Начать продажу\n";
		std::wcout << L"2 - Показывать товары\n";
		std::wcout << L"3 - Пополнить товары\n";
		std::wcout << L"4 - Списать товары\n";
		std::wcout << L"5 - Изменить цены товаров\n";
		std::wcout << L"6 - Редактировать товары\n";
		std::wcout << L"7 - Редактировать пользователей\n";
		std::wcout << L"8 - Показать прибыль\n";
		std::wcout << L"9 - Поставщик\n";
		std::wcout << L"0 - Выход из учетной записи\n";
		std::wcout << L"Ввод: ";
		Getline(choose);
		 
		if (choose == L"1")
		{

		}
		else if (choose == L"2" && sizeSt > 0)
		{
			ShowStorage();
		}
		else if (choose == L"3" && sizeSt > 0)
		{
			AddProduct();
		}
		else if (choose == L"4" && sizeSt > 0)
		{
			removeProduct();
		}
		else if (choose == L"5" && sizeSt > 0)
		{
			ChangePrice();
		}
		else if (choose == L"6")
		{
			ChangeStorage();
		}
		else if (choose == L"7")
		{

		}
		else if (choose == L"8")
		{

		}
		else if (choose == L"9")
		{
			ShowSupplier();
		}
		else if (choose == L"0")
		{

		}
		else
		{
			Err();
		}


	}
}