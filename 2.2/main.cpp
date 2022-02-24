#include <iostream>

void Countsort(int n, int mas[])
{

    int m = INT_MAX;
    int M = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > M)
            M = mas[i];
        if (mas[i] < m)
            m = mas[i];
    }
    int a;
    a = M - m + 1;
    int* c = new int[a];
    int y[10];
    for (int i = 0; i < a; i++)
        c[i] = 0;
    for (int j = 0; j < n; j++)
    {
        int k = mas[j]-m;
        c[k]++;
    }
    for (int i =1; i < a; i++)
    {
        c[i] += c[i - 1];
    }
    for (int j = 0; j <n; j++)
    {
        int k = mas[j]-m;
        y[c[k] - 1] = mas[j];
        c[k]--;
    }
    for (int j = 0; j < n; j++)
        mas[j] = y[j];
    delete[] c;
}
int main()
{
    int n;
    std::cin >> n;
    int* mas = new int[n];
    for (int i = 0; i < n; i++)
        std::cin >> mas[i];
    Countsort(n, mas);
    for (int i = 0; i < n; i++)
        std::cout << mas[i] << " ";
    delete[] mas;
}
