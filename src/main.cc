#include<iostream>

void print(int&);

int main()
{
     int*** matrix
    {
        new int**
        {
            new int*[3]
            {
                new int[3]{1, 2, 3},
                new int[3]{4, 5, 6},
                new int[3]{7, 8, 9}
            }
        }
    };

    for(int i{}; i < 3; i++)
    {
        for(int j{}; j < 3; j++)
        {
            for(int k{}; k < 3; k++)
            {
                std::cout << matrix[i][j][k] << "\t";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    std::cin.get();
    return 0;
}