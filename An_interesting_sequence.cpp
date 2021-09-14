#include <bits/stdc++.h>
using namespace std;

long int gcd(long long int a, long int b)
{
	long int hcf = 1;
	if(b%a == 0)
		return a;
	else
	{
		for(int i=3; i<=sqrt(a); i+=2)
		{
			if(a%i == 0 && b%i ==0)
			{
				hcf *=i;
				a/=i;
				b/=i;
				i=3;
			}
		}
	}
	return hcf;
}

int main (void)
{
	long int test_case {0};
	cin >> test_case;
	while(test_case--)
	{
		int k {0};
		cin >> k;
		int count {0};
		for(long int i=1; i<=2*k; ++i)
		{
			cout << k + i*i << " - " << k + (i+1)*(i+1) << " ---- " << gcd(k + i*i, k + (i+1)*(i+1)) << endl;
		}
		cout << count << endl;
	}
}