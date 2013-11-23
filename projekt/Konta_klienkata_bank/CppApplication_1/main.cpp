/* 
 * File:   main.cpp
 * Author: coffeina
 *
 * Created on 17 listopad 2013, 20:06
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    kontoKlienta a1;
    
    a1.ustaw();
    
    a1.wplata(250.00);
    a1.saldo();
    a1.wyplata(500.00);
    a1.saldo();
    return(0);
}

