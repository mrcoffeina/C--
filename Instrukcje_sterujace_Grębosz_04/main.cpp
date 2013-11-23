#include <iostream>

using namespace std;

int main()
{   int i;
    std::cout << "Podaj jakas liczbe: ";
    std::cin >> i;
    if(i - 4) std::cout << "zmienna 'i' miała wartośc inną niż 4\n";
    else std::cout << " zmienna 'i' nie miała wrtości równiej 4\n";
}

