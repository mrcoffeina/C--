#include <iostream>

using namespace std;

int main()
{   int *x;
    int *y;
    y = new int;// przydzielenie przydziału pamięci za pomocą operatora: 'new'
    x= new int;
    *x = 5;
    *y = 6;
    cout << "przydzielona wartości całkowita: "<<*x<< "\n";
    cout <<"przydzielona wartości całkowita: "<<*y<<"\n";
    delete x;
    return 0;
}

