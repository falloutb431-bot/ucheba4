#include <iostream>

int main() {
    int number;
    int sum = 0; 
    do {
        std::cout << "VVEDITE CHISLO ILI 0 DLY OFF:" << endl;
        std::cin >> number;
        sum += number; 
    } while (number != 0);

 
    cout << "SUMMA VVEDENNIH CHISEL: " << sum << endl;

    return 0;
}