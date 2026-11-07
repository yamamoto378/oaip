#include <iostream>

int main() {
    char letter;
    std::cout << "Введите одну из букв (A, S, D, F, B, R): ";
    std::cin >> letter;
    switch (letter) {
        case 'A':
            std::cout << "Apple (Яблоко)" << std::endl;
            break;
        case 'S':
            std::cout << "Sun (Солнце)" << std::endl;
            break;
        case 'D':
            std::cout << "Dog (Собака)" << std::endl;
            break;
        case 'F':
            std::cout << "Fox (Лиса)" << std::endl;
            break;
        case 'B':
            std::cout << "Banana (Банан)" << std::endl;
            break;
        case 'R':
            std::cout << "Red (Красный)" << std::endl;
            break;
        default:
            std::cout << "Ошибка: введен неверный символ!" << std::endl;
    }

    return 0;
}
