#include <iostream>

using namespace std;
inline void myfunc(int& xref){xref = 10;} // ale dlaczego średnik jest zaraz bo wartości przypisanej ?
int main()
{
    int x = 5;
    myfunc(x);
    cout << "zmienna ma wrtość: "<< x <<"\n";
    return 0;
}
/*void myfunc(int& xref){
    xref= 10;

}
*/


