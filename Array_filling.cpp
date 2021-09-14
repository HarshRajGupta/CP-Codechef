#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test_case {0};
	cin >> test_case;
	while (test_case--)
	{
		long long n, m;
		cin >> n >> m;

		vector<pair<int, int>> vp;
		for(int i = 0; i<m; i++)
		{
			long long x, y;
			cin >> x >> y;
			vp.push_back({x, y});
		}
		sort(vp.begin(), vp.end(), greater<pair<int, int>>());

		long long lcm = 1;
		long long rem = n;
		long long res = 0;

		for(int i = 0; i<m && rem > 0; i++)
		{
			long long a = vp[i].first, b = vp[i].second;
			lcm = lcm*b/__gcd(lcm, b);
			res += (rem   -n/lcm)*a;
			rem = n/lcm;
		}
		cout << res << endl;
	}
	return 0;
}