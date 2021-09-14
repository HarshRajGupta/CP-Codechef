#include <bits/stdc++.h>
using namespace std;

long long int power(long long int b)
{
	long long int a {2};
	long long int result {1};
	while (b>0)
	{
		if (b&1)
		{
			result = (result*a)%1000000007;
		}
		a=(a*a)%1000000007;
		b=b>>1;
	}
	result = result%1000000007;
	return result;
}

int main(void)
{
	long long int test_cases {0};
	cin >> test_cases;
	while(test_cases--)
	{
		long long int n {0}, m {1};
		cin >> n;
		cout << power(n-1) << endl;
	}
	return 0;
}