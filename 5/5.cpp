#include "functions.hpp"
#include <iostream>

using namespace mt;
int main()
{
	int mas[N];
	int n, num;
	int proizv = 1,sum = 0;
	Read(n, mas);
	DeleteAndDupl(mas,n,num,proizv,sum);
	Write(n, mas);
}