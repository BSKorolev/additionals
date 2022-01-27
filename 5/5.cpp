#include "functions.hpp"
#include <iostream>


int main()
{
	int mas[N];
	int n, num, nu;
	mt::Read(n, mas);
	mt::Delete(mas, n, num);
	mt::Dupl(mas, n, nu);
	mt::Write(n, mas);
}