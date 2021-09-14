#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int test_case {0};
	cin >> test_case;
	while (test_case--)
	{
		cin.tie(0);
		/* Code */
		long long int D, d, p, q;
		cin >> D >> d >> p >> q;
		long long result = p * D; // 3
		long long n = D/d; // 1
		result += ((n*(n-1))/2)*d*q;
		if (D % d != 0)
		{
			result += (n*q*(D-(n*d)));
		}
		cout << result << endl;
	}
	return 0;
}