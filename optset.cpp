#include <bits/stdc++.h>
using namespace std;

int max_xor(int n, int k)
{
	if (k == 1)
	{
		return n;
	}
	else
	{
		int e = log2(n) + 1;
		return ((1 << e) - 1);
	}
}

void XOR(int n, int k, int x, int c)
{
	if (k == 0)
	{
		return;
	}
	else if (k == 1)
	{
		cout << x << " ";
		return;
	}
	else
	{
		if (x == 0)
		{
			XOR(n, k - 1, c - 1, c);
			cout << c - 1 << " ";
			return;
		}
		else
		{
			for (int j = n - 1; j >= 0; --j)
			{
				for (int i = 1; i < n + 1; i++)
				{
					if ((i ^ j) == x)
					{
						if (((i > j) &&  (i < c)))
						{
							XOR(n, k - 1, j, i);
							cout << i << " ";
							return;
						}
						else if ((j > i) && (j < c))
						{
							XOR(n, k - 1, i, j);
							cout << j << " ";
							return;
						}
					}
				}
			}
		}
	}
}

int main(void)
{
	int test_case {0};
	cin >> test_case;
	while (test_case--)
	{
		cin.tie(0);
		/* Code */
		int n, k;
		cin >> n >> k;
		int j = max_xor(n, k);
		// cout << j << endl;
		XOR(n, k, j, j);
		cout << endl;
	}
	return 0;
}