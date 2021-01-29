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
    {
        cout << "{";
        for (int i = 0; i < 10; i++)
        {
            cout << array[i] << " ,";

        }
        cout << "}\n\n";
    }
    {
        int sum = array[0];
        cout << "result: \n{";
            for (int i = 0; i < 10; i++)
            {
                cout << sum << " ,";
                sum = sum + array[i];
            }
        cout << "}\n\n";
            
    }
 
}
