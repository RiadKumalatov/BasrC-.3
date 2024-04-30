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
	std::cout << "�����: " << storingAdress.city << "\n";
	std::cout << "�����: " << storingAdress.street << "\n";
	std::cout << "����� ����: " << storingAdress.houseNumber << "\n";
	std::cout << "����� ��������: " << storingAdress.apartmentNumber << "\n";
	std::cout << "������: " << storingAdress.zipCode << "\n" << std::endl;
}
int main() 
{
	setlocale(LC_ALL, "Russian");

	storingAdress adress = {"������", "�������", "15", "21", "344000"};
	showStoringAdress(adress);

	storingAdress adress2 = {"������-��-����", "���������", "9�", "1212", "344123"};
	showStoringAdress(adress2);
}