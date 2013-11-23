#include <iostream>

using namespace std;
const int MAX = 80;
int main()
{
    char buf[MAX];
    while (cin.getline(buf, MAX)){
        int chars_in;
        chars_in = std::cout();
        cout.write(buf, chars_in);
    }
        return 0;
}

