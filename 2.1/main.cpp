#include <iostream>
#include <windows.h>

#define N 100

void reverse(char S[N],int n, char rS[N],int i)
{
	n--;
	rS[i] = S[n];
	i++;
	if (n == 0)
		return;
	reverse(S, n,rS,i);
}
int main()
{
	int i = 0;
	char S[N];
	std::cin >> S;
	int n = strlen(S);
	char rS[N];
	reverse(S, n, rS, i);
	std::cout << rS;
}
