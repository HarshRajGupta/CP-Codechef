#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long int test_cases {0};
	cin >> test_cases;
	while(test_cases--)
	{
		long int n {0}, x {0}, k {0};
		cin >> n >> x >> k;
		if (x%k == 0)
		{
			cout << "YES" <<endl;
		}
		else
		{
			x = n+1-x;
			if (x%k == 0)
			{
				cout << "YES" << endl;
			}
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}