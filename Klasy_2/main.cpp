/*Poniższy przykład nie działa i nie wiem na razie dlaczego
 *Byc może nie utworzyłem odpowiednio klas
*/



#include <iostream>

using namespace std;
class polisa{
protected:
    char nazwisko[30];
    char imie[20];
    char adres[30];
    char polno[8];
    double wart_uezp;
    double skladka;

 public:
    polisa();
    ~polisa();
    void odnow();
    void odnow(double nowaSkladka);
    bool odszkod(double);
    bool operator -=(double wieklOdszkod);

};

 class motor: public polisa{
 private:
     double rezerwa;
 public:
     void premia_bezwypadkowa();

 };




int main()
{
    polisa p1;
    motor p2;
    cout << "Polisa na życie: " << endl;
    return 0;
}

