//Задача
//
//Вычислить сумму ряда: i / (N * (N - i)) от i = 1 до N - 1 (N вводится пользователем с клавиатуры)

#include <iostream>

using namespace std;

int main()
{
	float S = 0;
	int N = 0;

	cout << "Enter N value: ";
	cin >> N;
	for (size_t i = 1; i < N; i++)
	{
		S += (float)i / (N * (N - i));
	}
	cout << "Sum = " << S;

	return 0;
}