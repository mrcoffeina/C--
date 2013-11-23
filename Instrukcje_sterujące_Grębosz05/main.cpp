#include <iostream>

using namespace std;

int main()
{
    int wys, punkty_karne;
    std::cout << "Na jakiej wysokości lecimy ? [W metrach]: ";
    std::cin >> wys;

    if(wys < 500){
        std::cout << "\n" << wys << " To za nisko!!! \n";
        punkty_karne = 1;
    }else{
        std::cout << "\nNa wysokości: " << wys
                  << "netrow jest już bezpieczny \n";
        punkty_karne = 0;
    }
    std::cout << "Masz " << punkty_karne << " punktów karnych \n";
    if(punkty_karne)std::cout << "Popraw się !!!\n" <<"==========================================\n";

}

