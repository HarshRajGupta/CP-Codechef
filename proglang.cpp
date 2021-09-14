#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int test_case {0};
	cin >> test_case;
	while (test_case--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v;
		int max=0, max_index=0;
		for(int i = 0; i<n; i++)
		{
			int temp;
			cin >> temp;
			v.push_back(temp);
			if (temp > max)
			{
				max_index = i;
				max = temp;
			}
		}
		cout << n-max_index << endl;
	}
	return 0;
}