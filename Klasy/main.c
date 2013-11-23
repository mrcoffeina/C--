#include <stdio.h>


int main(void)
{
    printf("Hello World!\n");
    return 0;
}


class polisa{
private:
    char nazwisko[30];
    char imie[20];
    char polno[8];
    double wart_ubez;
    double skladka;

public:
    void pod_znkowy();
    void pol_likwid();
    void odnow();
    bool odszkod(double);
};

