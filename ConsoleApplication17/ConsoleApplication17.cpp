#include <iostream>

using namespace std;



int main()
{
    setlocale(LC_ALL, "ru");
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Введите " << i + 1 << "й элемент массива\n";
        cin >> array[i];
        system("cls");
    }
    int a = 1;
    for (int i = 1; i < 10; i++)
    {
        if (array[i - 1] <= array[i])
        {
            continue;
        }
        else
        {
            a = 2;
            for (int i = 1; i < 10; i++)
            {
                if (array[i - 1] >= array[i])
                {
                    continue;
                }
                else
                {
                    a = 3;
                    break;
                }

            }

        }

    }

    switch (a)
    {
    case 1:
    {
        for (int i = 1; i < 10; i++)
        {
            if ((array[i] - array[i - 1]) <= 1 && (array[i] - array[i - 1]) > -1)
            {
                continue;
            }
            else
            {
                cout << "\nFalse\n";
                system("pause");
                break;
            }

        }
        cout << "\nTrue\n";
        system("pause");
        break;
    }
    case 2:
    {
        for (int i = 1; i < 10; i++)
        {
            if ((array[i - 1] - array[i]) <= 1 && (array[i - 1] - array[i]) > -1)
            {
                continue;
            }
            else
            {
                cout << "\nFalse\n";
                system("pause");
                break;
            }

        }
        cout << "\nTrue\n";
        system("pause");
        break;

    }
    case 3:
    {
        cout << "\nFalse\n";
        system("pause");
        break;
    }
    }

}