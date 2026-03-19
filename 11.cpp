#include <iostream>

int main() {
    int number;
    int sum = 0; 
    do {
        std::cout << "Вводите целые числа (0 для завершения):" << endl;
        std::cin >> number;
        sum += number; 
    } while (number != 0);

 
    cout << "Сумма введённых чисел: " << sum << endl;

    return 0;
}