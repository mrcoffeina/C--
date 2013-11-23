/* 
 * File:   accfunc.cpp
 * Author: coffeina
 * 
 * Created on 17 listopad 2013, 20:02
 */
#include <iostream>
#include "accfunc.h"
accfunc::accfunc() {
}

accfunc::accfunc(const accfunc& orig) {
}

accfunc::~accfunc() {
}

void kontoKlienta::ustaw(){
    std::cout << "Podaj numer konta, który chcesz otworzyć: ";
    std::cin  >> nrKonta;
    cout << "Podaj starn początkowy: ";
    std::cin  >> stanPocz;
    std::cout << "Utworz konto klienta" << nrKonta;
    std::cout << "ze stanem " << stanPocz << endl;
}

void kontoKlienta::wplata(float wielkWplaty){
    stanPocz += wielkWplaty;
    cout << "Wpłata" << wielkWplaty << "potwierdzona" << endl;

}

void kontoKlienta::wyplata(float wielkWyplaty){
    if(stanPocz > wileWyplaty){
        stanPocz -= wielkWyplaty;
        cout << "Wyplata" << wielkWyplaty << "potwierdzona" << endl;
        return;
    }
    cout << "Stan konta nie wystarcza do pobrania " << wielkWyplaty << endl;
    stanPocz = (float)0;
}
void kontoKlienta::saldo(){
    std::cout << "Stan konta wynosi" << stanPocz << endl;
}
