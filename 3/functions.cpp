#pragma once
#include "functions.hpp"
#include <iostream>
#define N 100
namespace mt
{
    
    void Read(int& n)
    {
        std::cin >> n;
    }
    void minimal(int n, int& min)
    {
        min = INT_MAX;
        while (n > 0)
        {
            int c = n % 10;
            if (c < min)
            {
                min = c;
            }
            n /= 10;
        }
    }
    void proizv(int n, int& pro)
    {
        pro = 1;
        while (n > 1)
        {
            int p = n % 10;
            pro *= p;
            n /= 10;
        }
    }
    void often(int mas[10], int n,int& m)
    {
        while (n > 0)
        {
            for (int i = 0; i < 10; i++)
            {
                if (n != 0)
                {
                    mas[i] = n % 10;
                    n /= 10;
                }
            }
        }
        int count = 0, countmax = 0;
        m = INT_MIN;
        for (int i = 0; i < 10; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (mas[i] == mas[j])
                {
                    count++;
                    if (count >= countmax)
                    {
                        int k = mas[i];
                        countmax = count;
                        if (k > m)
                        {
                            m = k;
                        }
                    }
                }
            }
            count = 0;
        }
		    
    }
    void Write(int min,int pro,int m)
    {
        std::cout << min << std::endl;
        std::cout << pro << std::endl;
        std::cout << m << std::endl;
    }

    

}