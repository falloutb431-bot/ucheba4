#include <iostream>

int main()
{
    int number;
    int summ=0;
    std::cout << "VVEDITE CELOE CHISLO: " << std::endl;
    std::cin >> number;
    int pervynum = number;
    while (number > 0)
    {
        int last = number % 10;
        summ += last;
        number /= 10;
    }

    std::cout << "Summa cifr chisla " << pervynum << " ravna " << summ << std::endl;
    return 0;
}