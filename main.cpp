// ÷ыбенко ƒмитрий; фигура: шестиугольник, контейнер: список.

#include <memory>
#include "Hexagon.h"
#include <cstdlib>
#include <iostream>
#include "TList.h"


void Menu();

int main()
{
	TList<Figure> list;
	size_t side;
	size_t sidea, sideb, sidec;
	size_t fig;
	size_t action = 8;

	while (action != 0) {
		switch (action)
		{
		case 0:
			break;
		case 1: //Add new item in begin of list
			std::cout << "Enter a side of hexagon for adding: ";
			std::cin >> side;
			list.AddFirst(std::shared_ptr<Hexagon>(new Hexagon(side)));
			std::cout << "______________________" << std::endl;
			std::cout << "Enter action number: ";
			std::cin >> action;
			break;
		case 2: //Add new item in end of list
			std::cout << "Enter a side of hexagon for adding: ";
			std::cin >> side;
			list.AddLast(std::shared_ptr<Hexagon>(new Hexagon(side)));
			std::cout << "______________________" << std::endl;
			std::cout << "Enter action number: ";
			std::cin >> action;
			break;
		case 3: //Insert in list
			size_t pos;
			std::cout << "Enter an item number position: ";
			std::cin >> pos;

			std::cout << "Enter a side of hexagon for adding: ";
			std::cin >> side;
			list.Insert(pos, std::shared_ptr<Hexagon>(new Hexagon(side)));
			std::cout << "______________________" << std::endl;
			std::cout << "Enter action number: ";
			std::cin >> action;
			break;
		case 4:
			std::cout << list;
			std::cout << "______________________" << std::endl;
			std::cout << "Enter action number: ";
			std::cin >> action;
			break;
		case 5:
			for (auto i : list) {
				std::cout << "( ";
				i->Print();
				std::cout << " ) ";
			}
			std::cout << std::endl;
			std::cout << "______________________" << std::endl;
			std::cout << "Enter action number: ";
			std::cin >> action;
			break;
		case 6:
			std::cout << "Enter a position of item for delete: ";
			std::cin >> pos;
			list.DeleteElem(pos);
			std::cout << "______________________" << std::endl;
			std::cout << "Enter action number: ";
			std::cin >> action;
			break;
		case 7:
			list.Erase();
			std::cout << "______________________" << std::endl;
			std::cout << "Enter action number: ";
			std::cin >> action;
			break;
		case 8:
			Menu();
			std::cout << "______________________" << std::endl;
			std::cout << "Enter action number: ";
			std::cin >> action;
			break;
		default:
			break;
		}
	}

	return 0;
}

void Menu() {
	std::cout << "\n" << std::endl;
	std::cout << "1. Add new item in begin of list." << std::endl;
	std::cout << "2. Add new item in end of list." << std::endl;
	std::cout << "3. Insert in list." << std::endl;
	std::cout << "4. Print list." << std::endl;
	std::cout << "5. Print list with iterator." << std::endl;
	std::cout << "6. Delete item from list." << std::endl;
	std::cout << "7. Erase list." << std::endl;
	std::cout << "8. Print MENU." << std::endl;
	std::cout << "0. Exit." << std::endl;

}
