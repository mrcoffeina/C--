#include <iostream>
using namespace std;

class nodisp{
private:
public:
    void output(){
        return;
    }
};

int main()
{
    nodisp screen;
    screen.output();
    cout << "Hello World!" << endl;
    return 0;
}

