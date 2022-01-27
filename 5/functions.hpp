#pragma once
#include <iostream>
#define N 10000

namespace mt
{
	void Read(int& n, int mas[N]);

	void Delete(int mas[N], int& n, int& num);
	
	void Dupl(int mas[N], int& n, int& nu);

	void Write(int& n, int mas[N]);
}