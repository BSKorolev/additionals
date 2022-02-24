#include <iostream>

void Countsort(int n, int mas[]) 
{
    int m = 0;
    int M = 32768;
    int c[32768];
    int y[10];
    for (int i = m; i < M; i++)
        c[i] = 0;
    for (int j = 0; j < n; j++)
    {
        int k = mas[j];
        c[k]++;
    }
    for (int i = m + 1; i < M; i++)
    {
        c[i] += c[i - 1];
    }
    for (int j = 0; j < n; j++)
    {
        int k = mas[j];
        y[c[k] - 1] = mas[j];
        c[k]--;
    }
    for (int j = 0; j < n; j++)
        mas[j] = y[j];
}
int main()
{
    int n;
    std::cin >> n;
    int* mas = new int[n];
    for (int i = 0; i < n; i++)
        mas[i]=rand();
    Countsort(n,mas);
    for (int i = 0; i < n; i++)
        std::cout << mas[i] << " ";
    delete[] mas;
}