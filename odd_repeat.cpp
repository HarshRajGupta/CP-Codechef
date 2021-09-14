#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int test_case {0};
	cin >> test_case;
	while (test_case--)
	{
		long long n, k;
		cin >> n >> k;
		vector <int> negative;
		long long sum = 0;
		for(int i = 0; i<n; i++)
		{
			int temp;
			cin >> temp;
			if (temp >= 0)
			{
				sum  += temp;
			}
			else
			{
				negative.emplace_back(temp);
			}
		}
		if (negative.size() > k)
		{
			sort(negative.begin(), negative.end());
		}
	}
	return 0;
}