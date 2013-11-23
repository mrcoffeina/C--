#include <iostream>

using namespace std;
class message{
    private:
    public:
    void pozdrowienia(){
        cout<< "Witaj świecie\n ";

    }
};

int main()
{
   message user; //egzemplarz klasy message o nazwie user
   user.pozdrowienia();//wywołanie funkcji 'pozdrawiam'
   return 0;
}

