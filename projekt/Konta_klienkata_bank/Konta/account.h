/* 
 * File:   account.h
 * Author: coffeina
 *
 * Created on 17 listopad 2013, 20:01
 */

#ifndef ACCOUNT_H
#define	ACCOUNT_H
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

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* ACCOUNT_H */

