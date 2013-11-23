#include <iostream>
#include "accounts.h"

void kontoKlienta::ustaw(){
    std::cout << "Podaj numer konta, który chcesz otworzyć: ";
    std::cin  >> nrKonta;
    std::cout << "Podaj starn początkowy: ";
    std::cin  >> stanPocz;
    std::cout << "Utworz konto klienta" << nrKonta;
    std::cout << "ze stanem " << stanPocz << "\n";
}

void kontoKlienta::wplata(float wielkWplaty){
    stanPocz += wielkWplaty;
    std::cout << "Wpłata" << wielkWplaty << "potwierdzona" << "\n";

}

void kontoKlienta::wyplata(float wielkWyplaty){
    if(stanPocz > wielkWyplaty){
        stanPocz -= wielkWyplaty;
        std::cout << "Wyplata" << wielkWyplaty << "potwierdzona" << "\n";
        return;
    }
    std::cout << "Stan konta nie wystarcza do pobrania " << wielkWyplaty << "\n";
    stanPocz = (float)0;
}
void kontoKlienta::saldo(){
    std::cout << "Stan konta wynosi" << stanPocz << "\n";
}

