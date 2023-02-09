#include <iostream>
#include "calculator.h"




int main( ){
    setlocale(LC_ALL, "Russian");
    int x,y;
    int choice;
    std::cout << "Первое число = ";
    std::cin >> x;
    std::cout << std::endl << "Второе число = ";
    std::cin >> y;


    while (true){
        std::cout << std::endl << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 0 - выйти из программы): ";
        std::cin >> choice;
    switch (choice)
    {
    case 1:
        std::cout << sum(x,y) << std::endl;
        break;
    case 2:
        std::cout << sub(x,y) << std::endl;
        break;
    case 3:
        std::cout << multi(x,y) << std::endl;
        break;
    case 4:
        std::cout << di(x, y) << std::endl;
        break;
    case 5:
        std::cout << power(x,y) << std::endl;
        break;
    case 0:
        return 0;
        break;
    default:
        std::cout << "Неверный выбор" << std::endl;
        break;
    }
    }
}