#include<iostream>
using namespace std;
int main()
{
	char num;
	cin >> num;

	switch (num)
	{
	case 'A':
		cout << "Num is 1\n";
		break;
	case 64:
		cout << "Num is 2\n";
		break;
	case 3:
		cout << "Num is 3\n";
		break;
	default:
		cout << "Non of them\n";
		break;
	}

	return 0;
}