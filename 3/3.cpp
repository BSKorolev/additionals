#include "functions.hpp"
#include <iostream>

using namespace mt;
int main()
{
    int n,mas[10], m;;
    int min=INT_MAX;
    int pro = 1;
    Read(n);
    minimal(n, min);
    proizv(n, pro);
    often(mas, n, m);
    Write(min,pro,m);
}
