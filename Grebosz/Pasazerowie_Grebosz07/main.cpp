#include <iostream>

using namespace std;

int main()
{
    std::cout << "Ilu jest pasażerów? ";
    int ile;
    std::cin >> ile;

    for(int i =1; i <= ile; i = i+1){
        std::cout << "Pasazer nr:  " << i
                  << " prosze zapiąć pasy!!!! \n";
    }
    std::cout << "Skoro wszyscy juz zapieli pasy, to lądujemy";
}

