#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int test_case {0};
	cin >> test_case;
	while (test_case--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a < b && a < c)
		{
			cout << "Draw" <<endl;
		}
		else if (b < c)
		{
			cout << "Bob" << endl;
		}
		else
		{
			cout << "Alice" << endl;
		}
	}
	return 0;
}