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

    void Delete(int mas[N],int& n, int& num)
    {
        for (int i = 0; i < n; i++)
        {
            num = mas[i];

            while (num > 9)
            {
                num /=10;
            }
            if (num==2)
            {
                for (int j = i; j <= n - 1; j++)
                    mas[j] = mas[j + 1];
                n--;
                i--;
            }
        }
    }
    
    void Dupl(int mas[N], int& n, int& nu)
    {
        int a, b, c, d;
        for (int i=0; i < n; i++)
        {
            nu = mas[i];
            if (nu > 1000)
            {
                a = nu % 10;
                b = (nu / 10) % 10;
                c = (nu / 100) % 10;
                d = nu / 1000;
                if (a != b && a!= c && a!= d && b!=c && b!=d && c!=d)
                {
                    n++;
                    for (int j = n - 1; j >= i + 1; j--)
                        mas[j] = mas[j - 1];
                    i++;
                }
            }
            else if (1000 > nu && nu > 100)
            {
                a = nu % 10;
                b = (nu / 10) % 10;
                c = nu / 100;
                if (a != b && a!= c && c != b)
                {
                    n++;
                    for (int j = n - 1; j >= i + 1; j--)
                        mas[j] = mas[j - 1];
                    i++;
                }
            }
            else if (10 < nu && nu < 100)
            {
                 a = nu / 10;
                 b = nu % 10;
                 if (a != b)
                 {
                     n++;
                     for (int j = n - 1; j >= i + 1; j--)
                         mas[j] = mas[j - 1];
                     i++;
                 }
            }
            else if (nu <= 10)
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
            cout << mas[i] << " ";
    }
}