#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;

    do
    {
        std::cout << "\nЗадание 1";
        std::cout << "\n\nЗадание 2";
        std::cout << "\n\nЗадание 3";
        std::cout << "\n\nвыход 0";
        std::cout << "\n\nВыберите задание: ";
        std::cin >> n;

        if (n == 1)
        {
            int a, x1, x2, x3, x4, x5, x6;

            std::cout << "Введите шестизначное число: ";
            std::cin >> a;

            if (a >= 100000 && a <= 999999)
            {
                x1 = a / 100000;
                x2 = a / 10000 % 10;
                x3 = a / 1000 % 10;
                x4 = a / 100 % 10;
                x5 = a / 10 % 10;
                x6 = a % 10;

                if (x1 + x2 + x3 == x4 + x5 + x6)
                    std::cout << "Число счастливое";
                else
                    std::cout << "число не счастливое";
            }
            else
                std::cout << "ошибка число должно быть шестзначным.";
        }

        else if (n == 2)
        {
            int a, b, c, d, result;

            std::cout << "Введите четырехзначное число: ";
            std::cin >> a;

            if (a >= 1000 && a <= 9999)
            {
                b = a / 1000;
                c = a / 100 % 10;
                d = a / 10 % 10;

                result = (a / 1000 % 10) * 1000
                    + (a / 100 % 10) * 100
                    + (a / 10 % 10) * 10
                    + a % 10;

                result = (a / 100 % 10) * 1000
                    + (a / 1000) * 100
                    + (a % 100 / 10) * 10
                    + a % 10;

                std::cout << "новое число: " << result;
            }
            else
                std::cout << "ошибка число должно быть четырехзначным.";

        }
        else if (n == 3)
        {
            int a, max;

            std::cout << "Введите 1 число: ";
            std::cin >> max;

            for (int i = 2; i <= 7; i++)
            {
                std::cout << "Введите " << i << " число: ";
                std::cin >> a;

                if (a > max)
                    max = a;
            }

            std::cout << "максимальне число: " << max;
        }

    } while (n != 0);

    std::cout << "\nпрограмма завершена";

    return 0;
}
