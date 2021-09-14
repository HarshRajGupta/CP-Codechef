#include <iostream>
using namespace std;

int main(void)
{
	int n {0};
	cin >> n;
	if (n % 2 == 0)
	{
		if (n > 20)
		{
			cout << "Not Weird";
		}
		else
		{
			if (n > 5)
			{
				cout << "Weird";
			}
			else
			{
				cout << "Not Weird";
			}
		}
	}
	else
	{
		cout << "Weird";
	}
}

