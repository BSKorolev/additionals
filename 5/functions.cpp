#pragma once
#include "functions.hpp"
#include <iostream>
using namespace std;
namespace mt
{
    void Read(int& n, int mas[N])
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> mas[i];
    }

    void DeleteAndDupl(int mas[N],int& n, int& num,int& proizv,int sum)
    {
        for (int i = 0; i < n; i++)
        {
            num = mas[i];
            proizv = 1;
            sum = 0;

            while (num > 0)
            {
                int  cifra = num % 10;
                num = num / 10;
                sum += cifra;
                proizv *= cifra;
            }
            if (sum == 18)
            {
                for (int j = i; j <= n - 1; j++)
                    mas[j] = mas[j + 1];
                n--;
                i--;
            }
            if (proizv % 35==0 && proizv>0)
            {
                n++;
                for (int j = n - 1; j >= i + 1; j--)
                    mas[j] = mas[j - 1];
                i++;
            }
        }

    }
    void Write(int& n, int mas[N]) 
    {
        for (int i = 0; i < n; i++)
            std::cout << mas[i] << " ";
    }
}