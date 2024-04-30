#include <iostream>

struct storingAdress
{
	std::string city;
	std::string street;
	std::string houseNumber;
	std::string apartmentNumber;
	std::string zipCode;
};

void showStoringAdress(storingAdress& storingAdress) 
{
	std::cout << "Город: " << storingAdress.city << "\n";
	std::cout << "Улица: " << storingAdress.street << "\n";
	std::cout << "Номер дома: " << storingAdress.houseNumber << "\n";
	std::cout << "Номер квартиры: " << storingAdress.apartmentNumber << "\n";
	std::cout << "Индекс: " << storingAdress.zipCode << "\n" << std::endl;
}
int main() 
{
	setlocale(LC_ALL, "Russian");

	storingAdress adress = {"Москва", "Пушкина", "15", "21", "344000"};
	showStoringAdress(adress);

	storingAdress adress2 = {"Ростов-на-Дону", "Мечникова", "9Б", "1212", "344123"};
	showStoringAdress(adress2);
}