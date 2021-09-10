
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i = 0;
	int sum = 0;
	do
	{
		i++;
		sum += i;
	} while (i < 5000);
	cout << "Сумма чисел  от 1 до 5000 = " << sum << " конечное число = " << i << endl;
	return 0;
}
