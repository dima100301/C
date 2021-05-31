#include <iostream>
#include <clocale>
using namespace std;

//enum boolean {1,2,3,4,5,6,7,8,9};

//int a = 10;

int main()
{

    setlocale(LC_ALL, "Russian");

    std::cout << "\t\t\t\tВведите своё имя:" << std::endl;

    char name[100] = { 0 };

    cin >> name;

    std::cout << "\t\t\t\tВведите свой возрост:" << std::endl;

    short int age = 0;

    cin >> age;

    std::cout << "\t\t\t\tПривет" << name << "_" << age  << std::endl;
    //short int b = 255;

    std::cout << "\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"   << std::endl;
    std::cout << "\t$$$$$$$$$$$$$$$$$$$$$Давай играть:$$$$$$$$$$$$$$$$$$$$$$$$$$"   << std::endl;
    std::cout << "\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n" << std::endl;
    std::cout << "\t\t\t\t-7-|-8-|-9-"       << std::endl;
    std::cout << "\t\t\t\t-4-|-5-|-6-"       << std::endl;
    std::cout << "\t\t\t\t-1-|-2-|-3-\n\n\n" << std::endl;

    std::cout << "\t\t\t\t---|---|---" << std::endl;
    std::cout << "\t\t\t\t---|---|---" << std::endl;
    std::cout << "\t\t\t\t---|---|---" << std::endl;








return 0;

}