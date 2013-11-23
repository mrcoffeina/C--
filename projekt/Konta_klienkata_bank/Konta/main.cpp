#include <iostream>
#include "accounts.h"
using namespace std;

int main()
{
    kontoKlienta a1;
    a1.ustaw();
    a1.wplata(250.00);
    a1.saldo();
    a1.wyplata(500.00);
    a1.saldo();
    return(0);
}
