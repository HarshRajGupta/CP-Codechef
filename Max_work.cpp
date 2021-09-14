#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long int test_case {0};
	cin >> test_case;
	while (test_case--)
	{
		long long int d, x, y, z;
		cin >> d >> x >> y >> z;
		if (((d * y) + z) > (x * 7))
		{
			cout << (d*y)+z << endl;
		}
		else
		{
			cout << x*7 << endl;
		}
	}
	return 0;
}