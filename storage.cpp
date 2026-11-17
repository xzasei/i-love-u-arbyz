#include "storage.hpp"


size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;
bool isStorageCreated = false;


void CreateStorage(int mode)
{
	if (mode == 0 && !isStorageCreated)
	{
		const size_t staticSize = 10;
		size_t idArrstatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10 };
		std::wstring nameArrStatic[staticSize];
		{
			L"Крушка виде арбуза", L"Тарелке виде арбуза",
				L"Миска для питомцов виде арбуза", L"Миски виде арбуза",
				L"Чашки виде арбуза", L"Вазы виде арбузов",
				L"Салатницы виде арбуза", L"Чайники виде арбузов",
				L"горшки виде арбузов", L"Кувшины виде арбузов";
		}
		size_t countArrStatic[staticSize]{ 12, 14, 3, 17, 23, 34, 7, 19, 57, 67 };
		double priceArrStatic[staticSize]{ 250.05, 200.55, 500, 200, 200, 550, 250, 350, 450,460 };

		sizeSt = staticSize;
		idArr = new size_t[sizeSt];
		nameArr = new std::wstring[sizeSt];
		countArr = new size_t[sizeSt];
		priceArr = new double[sizeSt];

		FillArray(idArr, idArrstatic, sizeSt);
		FillArray(nameArr, nameArrStatic, sizeSt);
		FillArray(countArr, countArrStatic, sizeSt);
		FillArray(priceArr, priceArrStatic, sizeSt);

		isStorageCreated = true;
	}
	else if (mode == 1)
	{
		// to do
	}
	else
	{
	std::wcout << L"Складн уже создан";
	Sleep(1500);
	}
	void ShowStorage();
	{
		if (mode = 0)
			system("cls");
		std::wcout << "\n\n\t\tСклад Watermelon\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
		<<L"Кол-во\t" << L"Цена\t\t";
		// stop this moment
		// фарит ещё должен показать схемку 18.11.2026
	}
}








