#include <iostream.h>
class nodisp{
    private:
    public:
    void output(){
        return;
    }

};

int main(){
    nodisp screen;
    screen.output();
    return(0);

}
