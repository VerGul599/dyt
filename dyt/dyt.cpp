#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A;
    std::cout << "Введите целое число A: ";
    std::cin >> A;

    std::cout << "Числа B, для которых A делится на B*B без остатка и не делится на B*B*B без остатка: ";

    for (int B = 1; B * B <= A; B++) 
    {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) 
        {
            std::cout << B << " ";
        }
    }

    return 0;
}
