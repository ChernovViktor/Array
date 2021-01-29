#include <iostream>

using namespace std;



int main()
{
	setlocale(LC_ALL, "ru");
	string adress;
	cin >> adress;
	for (int i = 0; i < adress.size(); i++)
	{
		if (adress[i] != '.')
		{
			cout << adress[i];
		}
		else
		{
			cout << "[.]";
		}
	}

}