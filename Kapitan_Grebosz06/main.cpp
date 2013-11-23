#include <iostream>

using namespace std;

int main()
{
    int ile;
    std::cout << "Ile gwiazdek ma mieć kapitan? ";
    std::cin >> ile;
    std::cout << "\n No to narysuje wszystkie: " << ile << ":";

    while(ile){
        std::cout << "*";
        ile = ile -1;
    }
    std::cout << "\n Teraz zmienna ile ma wartości: " << ile << endl;
}

