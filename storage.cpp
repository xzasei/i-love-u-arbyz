#include "storage.hpp"

#include "Supplier.hpp"

size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;
bool isStorageCreated = false;
size_t maxStorageSize = 2000;
size_t currentStorage = 0;
double maxPrice = 10000;


void CreateStorage(int mode)
{
	if (mode == 0 && !isStorageCreated)
	{
		const size_t staticSize = 10;
		size_t idArrstatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10 };
		std::wstring nameArrStatic[staticSize]
		{
			L"Крушка виде арбуза", L"Тарелке виде арбуза",
			L"Миска для питомцов виде арбуза", L"Миски виде арбуза",
			L"Чашки виде арбуза", L"Вазы виде арбузов",
			L"Салатницы виде арбуза", L"Чайники виде арбузов",
			L"горшки виде арбузов", L"Кувшины виде арбузов"
		};
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

		for (size_t i = 0; i < sizeSt; i++)
		{
			currentStorage += countArr[i];
		}

		isStorageCreated = true;
	}
	else if (mode == 1)
	{
		// to do
	}
	else
	{
	std::wcout << L"Склад уже создан";
	Sleep(1500);
	}
	
}

void ShowStorage(int mode)
{
	if (mode == 0)
	{
		system("cls");
		std::wcout << L"\n\n\t\tСклад Watermelon\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
			<< L"Кол-во\t" << L"Цена\t\t\n\n";
		
		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(40) << nameArr[i]
				<< L"\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
		std::wcout << L"\n\n";
		system("pause");
	}
	else if (mode == 1)
	{
		system("cls");
		std::wcout << L"\n\n\t\tПополнение товаров \"Watermelon\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
			<<L"Кол-во\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed
			<< std::left << std::setw(40) << nameArr[i]
			<< L"\t" << countArr[i] << L"\n";

		}
		std::wcout << L"\n\n";
		std::wcout << L"Занято на складе " << currentStorage << L" из " << maxStorageSize << L" мест\n";
	}
	else if (mode == 2)
	{
		system("cls");
		std::wcout << L"\n\n\t\tСписание товаров \"Watermelon\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
			<< L"Кол-во\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed
				<< std::left << std::setw(40) << nameArr[i]
				<< L"\t" << countArr[i] << L"\n";

		}
		std::wcout << L"\n\n";
		std::wcout << L"Занято на складе " << currentStorage << L" из " << maxStorageSize << L" мест\n";
	}
	else if (mode == 3)
	{
		system("cls");
		std::wcout << L"\n\n\t\tИзменение цен \"Watermelon\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
			<< L"Цена\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed
				<< std::left << std::setw(40) << nameArr[i]
				<< L"\t" << priceArr[i] << L"\n";

		}
		std::wcout << L"\n\n";
	}
	else if (mode == 4)
	{
		system("cls");
		std::wcout << L"\n\n\t\tПереименование товара \"Watermelon\"\n\n";
		std::wcout << L"ID\t"  << L"Название товара\t\t"
			<< L"Цена\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed
				<< std::left << std::setw(40) << nameArr[i]
				<< L"\t" << priceArr[i] << L"\n";

		}
		std::wcout << L"\n\n";
	}
	else if (mode == 5)
	{
		system("cls");
		std::wcout << L"\n\n\t\tУдаление товара\"Watermelon\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
			<< L"Цена\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(38) << nameArr[i]
			<< L"\t" << priceArr[i] << L"\n";

		}
		std::wcout << L"\n\n";
	}
	
}

void AddProduct() // спросить фарита правильно ли все
{
	std::wstring chooseId, chooseCount, choose;

	while (true)
	{
		ShowStorage(1);
		std::wcout << L"Введите ID или \"exit\" для выхода \nВвод: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			return;
		}

		if (!Isnumber(chooseId))
		{

		}
		int id = std::stoi(chooseId) - 1;
		if (id < 0 || id >(int)sizeSt - 1)
		{
			Err();
		}

		if (!isSupplierCreated) 
		{
			CreateSupplier();
			std::wcout << L"У поставщика доступно " << supplierCountArr[id] << L" шт по цене " << supplierPriceArr[id] << L"\n";
			std::wcout << L"Свободно на складе: " << (maxStorageSize - currentStorage) << L"\n\n";
		}

		std::wcout << L"Введите Кол-во товара для пополнения: ";
		Getline(chooseCount);
		if (!Isnumber(chooseCount));
		
			size_t count = std::stoi(chooseCount);
			if (count == 0)
			{
				Err();
			}
		

		size_t freeSpace = maxStorageSize - currentStorage;
		if (count > supplierCountArr[id])
		{
			std::wcout << L"У поставщика только " << supplierCountArr[id] << L" шт.\n";
			Sleep(1500);
		}
		if (count > freeSpace)
		{
			std::wcout << L"На складе свободно " << freeSpace << L" мест\n";
			Sleep(1500);
		}

		while (true)
		{
			system("cls");
			std::wcout << nameArr[id] << L"\nИзменения " << countArr[id] << L" ---> " << countArr[id] + count << L"\n";
			std::wcout << L"Цена закупки " << supplierPriceArr[id] << L" за шт Итого " << supplierPriceArr[id] * count << L"\n";
			std::wcout << L"Потвердить?\n1 - Да \t2 - Нет\nВвод: ";
			Getline(choose);

			if (choose == L"1")
			{
				if (SellToShop(id, count))
				{
					countArr[id] += count;
					currentStorage += count;
					std::wcout << L"Товар успешно пополнен\n\n";
				}
				Sleep(1500); 
				break;
			}
			if (choose == L"2")
			{
				std::wcout << L"Отмена";
				Sleep(1500); 
				break;
			}
		}
	}
}

void removeProduct()
{
	std::wstring chooseId, chooseCount, choose;

	while (true)
	{
		ShowStorage(2);
		std::wcout << L"Введите ID или \"exit\" для выхода \nВвод: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции списания товара\n\n";
			Sleep(1500);
			return;
		}
		else if (true)
		{
			int id = std::stoi(chooseId) - 1;
			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"Введите Кол-во товара для списания: ";
				Getline(chooseCount);
				if (Isnumber(chooseCount))
				{
					size_t count = std::stoi(chooseCount);
					if (count < 0 && count > countArr[id])
					{
						std::wcout << L"Некорректный кол-во на складе осталось "
							<< countArr[id] - count << L" штук";
						Sleep(1500);
					}
					else
					{
						while (true)
						{
							system("cls");
							std::wcout << nameArr[id] << L"\nИзменения " << countArr[id] << L" ---> "
								<< countArr[id] - count << L"\n";
							std::wcout << L"Потвердить?\n1 - Да \t2 - Нет\nВвод: ";
							Getline(choose);
							if (choose == L"1")
							{
								std::wcout << L"Товар успешно списан\n\n";
								countArr[id] -= count;
								currentStorage -= count;
								Sleep(1500);
								break;
							}
							else if (choose == L"2")
							{
								std::wcout << L"Отмена списания" << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}
							else
							{
								Err();
							}
						}
					}
				}
			}
		}
	}
}

void ChangePrice()
{
	std::wstring chooseId, choosePrice, choose;

	while (true)
	{
		ShowStorage(3);
		std::wcout << L"Введите ID или \"exit\" для выхода \nВвод: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции изменение цен\n\n";
			Sleep(1500);
			return;
		}
		else if (true)
		{
			int id = std::stoi(chooseId) - 1;
			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"Введите новую стоимость товара: ";
				Getline(choosePrice);
				if (Isnumber(choosePrice))
				{
					double price = std::stoi(choosePrice);
					if (price < 0 && price > maxPrice)
					{
						std::wcout << L"Некорректная цена для изменения" << maxPrice << L"рублей";
						Sleep(1500);
					}
					else
					{
						while (true)
						{
							system("cls");
							std::wcout << nameArr[id] << L"\nИзменения " << priceArr[id] << L" ---> "
								<< price << L"\n";
							std::wcout << L"Потвердить?\n1 - Да \t2 - Нет\nВвод: ";
							Getline(choose);
							if (choose == L"1")
							{
								std::wcout << L"Успешное изменение стоимость товара\n\n";
								priceArr[id] = price;
								Sleep(1500);
								break;
							}
							if (choose == L"2")
							{
								std::wcout << L"Отмена изменение цены " << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}
							else
							{
								Err();
							}
						}
					}
				}
			}
		}
	}
}

void ChangeStorage()
{
	std::wstring choose;
	while (true)
	{
		system("cls");
		std::wcout << L"Редактирвоания склада\n";
		std::wcout << L"1 - Добавить новый товар\n";
		std::wcout << L"2 - Изменить название товара\n";
		std::wcout << L"3 - Удалить товар\n";
		std::wcout << L"4 - Изменить лимиты склада\n";
		std::wcout << L"0 - Выход\n";
		std::wcout << L"Ввод: ";
		Getline(choose);

		if (choose == L"1")
		{
			AddNewProduct();
		}
		else if (choose == L"2" && sizeSt > 0)
		{
			ChangeProductName();
		}
		else if (choose == L"3" && sizeSt > 0)
		{
			DeleteProduct();
		}
		else if (choose == L"4" )
		{
			removeProduct();
		}
		else if (choose == L"0")
		{
			std::wcout << L"Выход из редактора склада";
			Sleep(1500);
			break;
		}
		else
		{
			Err();
		}
	}
}

void AddNewProduct()
{
	std::wstring chooseName, chooseCount, choosePrice, choose;
	size_t count = 0;
	double price = 0;

	while (true)
	{
		while (true)
		{
			system("cls");
			std::wcout << L"Введите новое название товара или exit\n";
			std::wcout << L"Ввод: ";
			Getline(chooseName);
			if (chooseName == L"exit" || chooseName == L"Exit")
			{
				std::wcout << L"Отмена создания нового товара";
				Sleep(1500);
				return;
			}

			if (chooseName.size() < 3 || chooseName.size() > 40)
			{
				std::wcout << L"Ошибка длины название товара\n Допустимо от 3 до 40 символов";
				Sleep(1500);
			}
			if (IsNotname(chooseName, nameArr, sizeSt))
			{
				break;
			}
			else
			{
				std::wcout << L"Новый товар уже есть на складе";
				Sleep(1500);
			}
		}

		while (true)
		{
			system("cls");
			std::wcout << L"Введите кол-во товара или exit\n";
			std::wcout << L"Ввод: ";
			Getline(chooseCount);
			if (chooseCount == L"exit" || chooseCount == L"Exit")
			{
				std::wcout << L"Отмена добавления товара";
				Sleep(1500);
				return;
			}
			if (Isnumber(chooseCount))
			{
				count = std::stoi(chooseCount);
				if (count < 0 && count > maxStorageSize - currentStorage)
				{
					std::wcout << L"Некорректный кол-во на складе осталось"
						<< maxStorageSize - currentStorage << L"свободного места";
					Sleep(1500);
				}
				else
				{
					break;
				}
			}
		}

		while (true)
		{
			system("cls");
			std::wcout << L"Введите новую стоимость товара или exit\n";
			std::wcout << L"Ввод: ";
			Getline(choosePrice);
			if (choosePrice == L"exit" || choosePrice == L"Exit")
			{
				std::wcout << L"Отмена изменение цены товара";
				Sleep(1500);
				return;
			}
			if (Isnumber(choosePrice))
			{
				price = std::stod(choosePrice);
				if (price < 3 || price >= maxPrice)
				{
					std::wcout << L"Ошибка нельзя меньше 3 или больше 10000";
					Sleep(1500);
				}
				else
				{
					break;
				}
			}

		}
		while (true)
		{
			system("cls");
			std::wcout << L"Новый товар: " << chooseName << L"\n";
			std::wcout << L"Сколько товара: " << count << L"\n";
			std::wcout << L"Цена:  " << price << L"\n";
			std::wcout << L"Потвердить?\n1 - Да 2 - Нет \n";
			Getline(choose);
			if (choose == L"1")
			{
				std::wcout << L"Расширение склада";
				for (size_t i = 0; i < 5; i++)
				{
					Sleep(400);
					std::wcout << L".";
				}

				ArrPushBack(idArr, sizeSt);
				ArrPushBack(nameArr, sizeSt);

				ArrPushBack(countArr, sizeSt);
				ArrPushBack(priceArr, sizeSt);

				sizeSt++;
				idArr[sizeSt - 1] = sizeSt;
				nameArr[sizeSt - 1] = chooseName;
				countArr[sizeSt - 1] = count;
				priceArr[sizeSt - 1] = price;
				currentStorage += count;

				std::wcout << L"\nТовар добавлен";
				Sleep(1500);
				break;
			}
			else if (choose == L"2")
			{
				std::wcout << L"Отмена";
			}
			else
			{
				Err();
			}
		}
	
	}
}

void ChangeProductName()
{

		std::wstring chooseId, chooseName, choose;

		while (true)
		{
			ShowStorage(4);
			std::wcout << L"Введите ID товара или \"exit\" для выхода \nВвод: ";
			Getline(chooseId);
			if (chooseId == L"exit" || chooseId == L"Exit")
			{
				std::wcout << L"Завершение операции списания товара\n\n";
				Sleep(1500);
				return;
			}
			else if (true)
			{
				int id = std::stoi(chooseId) - 1;
				if (id < 0 || id > sizeSt - 1)
				{
					Err();
				}
				else
				{
					std::wcout << L"Изменение имя товара: ";
					Getline(chooseName);
					if (chooseName == L"exit" || chooseName == L"Exit")
					{
						std::wcout << L"Изменение название товара";
						nameArr[id] = chooseName;
						Sleep(1500);
						return;
					}

					if (chooseName.size() < 3 || chooseName.size() > 40)
					{
						std::wcout << L"Ошибка длины название товара\n Допустимо от 3 до 40 символов";
						Sleep(1500);
						continue;
					}
					if (IsNotname(chooseName, nameArr, sizeSt))
					{
						std::wcout << L"Уже есть такое название";
						Sleep(1500);
					}
					else
					{
						while (true)
						{
							system("cls");
							std::wcout << nameArr[id] << L" ---> " << chooseName << L"\n";
							std::wcout << L"Потвердить?\n1 - Да \t2 - Нет\nВвод: ";
							Getline(choose);
							if (choose == L"1")
							{
								std::wcout << L"Товар успешно списан\n\n";
								nameArr[id] = chooseName;

								Sleep(1500);
								break;
							}
							else if (choose == L"2")
							{
								std::wcout << L"Отмена изменения" << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}
							else
							{
								Err();
							}
						}
					}
				}
			}
		}
}

void DeleteProduct()
{

	{
		std::wstring chooseId, pass;

		while (true)
		{
			ShowStorage(5);
			std::wcout << L"Введите ID или \"exit\" для выхода \nВвод: ";
			Getline(chooseId);
			if (chooseId == L"exit" || chooseId == L"Exit")
			{
				std::wcout << L"Завершение операции изменение цен\n\n";
				Sleep(1500);
				return;
			}
			else if (Isnumber(chooseId))
			{
				int id = std::stoi(chooseId) - 1;
				if (id < 0 || id > sizeSt - 1)
				{
					Err();
				}
				
				else
				{
					std::wcout << L"\nВведите пароль супер админа: ";
					Getline(pass);
					if (pass == passArr[0])
					{
						std::wcout << L"Удаление товара";
						for (size_t i = 0; i < 5; i++)
						{
							Sleep(600);
							std::wcout << L".";
						}
						Sleep(500);
						currentStorage -= countArr[id];
						ArrDeleteByIndex(idArr, sizeSt, id);
						ArrDeleteByIndex(nameArr, sizeSt, id);
						ArrDeleteByIndex(countArr, sizeSt, id);
						ArrDeleteByIndex(priceArr, sizeSt, id);
						sizeSt--;
						for (size_t i = id; i < sizeSt; i++)
						{
							idArr[i] = i + 1;
						}

						if (sizeSt < 1)
						{
							std::wcout << L"Склад пустой";
							Sleep(1500);
							return;
						}

						std::wcout << L"\nТовар удален";
						Sleep(1500);
						continue;

					}
					else
					{
						Err();
					}
				}
			}
		}
	}
}

void ChangeStorageLimit()
{

}

