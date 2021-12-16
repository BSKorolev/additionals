#include <iostream>

int main()
{
	int s = 0;
	for (int i = 0; i <= 999; i++)
		for (int j = 0; j <= 999; j++)
			if (i / 100 + i % 100 / 10 + i % 10 == j / 100 + j % 100 / 10 + j % 10)
				s += 1;
	std::cout << s;
}
