#include <iostream>
#include <cstring>
#include<Windows.h>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<clocale>
 
struct address
{
    std::string city;
    std::string street;
    int house;
    int apartment;
    int zip_code;
    };

int Output_Of_Struct(address& w)
{
    std::cout << "Город: " << w.city << std::endl;
    std::cout << "Улица: " << w.street << std::endl;
    std::cout << "Номер дома: " << w.house << std::endl;
    std::cout << "Номер квартиры: " << w.apartment << std::endl;
    std::cout << "Индекс: " << w.zip_code << std::endl;
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    address RU = { "Москва", "Арбат", 12, 8, 123456 };
    Output_Of_Struct(RU);




    return 0;
}