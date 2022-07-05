#include<iostream>
using namespace std;

#define tab "\t"

#define NEVER_BEFORE

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;

	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		int count = 0; // счётчик повторений
		for (int j = i + 1; j < n; j++)

		{
			if (arr[i] == arr[j])
			{
				count++;
			}
			
		}
		if (count > 0)cout << arr[i] << "повторяется" << cout << "раз\n";
			

	}

}