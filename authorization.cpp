#include "authorization.hpp"

void Start()
{
	while (true)
	{
		if (Login())
		{

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
		std::wcout << L"\n\nВвод логин или \"exit\" для выхода\n\n";
		std::wcout << L"Вводите логин: ";
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
					Sleep(1500);
					return true;
				}
			}
			std::wcout << L"Неверный логин или пароль. Повторите попытку";
			Sleep(1500);
		}
	}
}