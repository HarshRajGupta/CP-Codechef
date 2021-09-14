#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long int test_case {0};
	cin >> test_case;
	while (test_case--)
	{
		cin.tie(0);
		/* Code */
		long long int xa, xb, Xa, Xb, result = 0;
		cin >> xa >> xb >> Xa >> Xb;
		if (Xa % xa == 0)
		{
			result = (Xa / xa);
		}
		else
		{
			result = (Xa / xa) + 1;
		}
		if (Xb % xb == 0)
		{
			result += (Xb / xb);
		}
		else
		{
			result += (Xb / xb) + 1;
		}
		cout << result << endl;
	}
	return 0;
}