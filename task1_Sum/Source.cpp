//������
//
//��������� ����� ����: i / (N * (N - i)) �� i = 1 �� N - 1 (N �������� ������������� � ����������)

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