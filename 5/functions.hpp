#pragma once
#include <iostream>
#define N 10000

namespace mt
{
	void Read(int& n, int mas[N]);

	void DeleteAndDupl(int mas[N], int& n, int& num, int& proizv, int sum);

	void Write(int& n, int mas[N]);
}