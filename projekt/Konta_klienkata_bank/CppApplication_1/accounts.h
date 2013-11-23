/* 
 * File:   accounts.h
 * Author: coffeina
 *
 * Created on 17 listopad 2013, 20:08
 */

#ifndef ACCOUNTS_H
#define	ACCOUNTS_H
class kontoKlienta{
private:
    float stanPocz;
    int nrKonta;
public:
    void ustaw();
    void wplata(float);
    void wyplata(float);
    void saldo();
};


#endif	/* ACCOUNTS_H */

