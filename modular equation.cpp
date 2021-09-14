#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long int test_cases {0};
	cin >> test_cases;
	while(test_cases--)
	{
		long long int n {0}, m {0};
		cin >> n >> m;
		long long int count {n-1};
		for(long long int a=2; a<=n; ++a)
		{
			// int x = m%i;

			for(long long int b=a+1; b<=n; b++)
			{
				if( (b*( (int)(m/b) ))%a == 0 )
				{
					cout << a << " - " << b << endl;
					++count;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}