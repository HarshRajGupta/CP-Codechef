#include <bits/stdc++.h>
using namespace std;

bool check()
{
	long long int n, k, f;
	cin >> n >> k >> f;
	long long int t = 0;
	for (int i = 1; i <= n; ++i)
	{
		long long int n1, n2;
		cin >> n1 >> n2;
		t += n2 - n1;
	}
	t = f - t;
	if (t >= k)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(void)
{
	int test_case {0};
	cin >> test_case;
	while (test_case--)
	{
		cin.tie(0);
		if (check() == true)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}