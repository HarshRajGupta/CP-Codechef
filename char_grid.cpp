#include <bits/stdc++.h>
using namespace std;

typedef pair <int, int> p_int;

p_int search_horizontal(const char Arr[200][200], const char x[], const p_int ca)
{
	int n = strlen(x);
	for (int i = 0; i <= ca.first - n; i++)
	{
		for (int j = 0; j < ca.second; j++)
		{
			if (Arr[i][j] == x[0])
			{
				int k = 0;
				while (k < n)
				{
					if (Arr[i + k][j] == x[k])
					{
						if (k == n - 1)
						{
							p_int result;
							result.first = i + 1;
							result.second = j + 1;
							return result;
						}
						else
						{
							++k;
						}
					}
					else
					{
						break;
					}
				}
			}
		}
	}
	p_int result;
	result.first = 0;
	result.second = 0;
	return result;
}

p_int search_vertical(const char Arr[200][200], const char x[], const p_int ca)
{
	int n = strlen(x);
	for (int i = 0; i < ca.first; i++)
	{
		for (int j = 0; j <= ca.second - n; j++)
		{
			if (Arr[i][j] == x[0])
			{
				int k = 0;
				while (k < n)
				{
					if (Arr[i][j + k] == x[k])
					{
						if (k == n - 1)
						{
							p_int result;
							result.first = i + 1;
							result.second = j + 1;
							return result;
						}
						else
						{
							++k;
						}
					}
					else
					{
						break;
					}
				}
			}
		}
	}
	p_int result;
	result.first = 0;
	result.second = 0;
	return result;
}

void search(const char Arr[200][200], char x[], const p_int ca)
{
	p_int z = search_horizontal(Arr, x, ca);
	if (z.first != 0 && z.second != 0)
	{
		cout << "Horizontal - Straight at " << z.first << ", " << z.second << endl;
		return;
	}
	else
	{
		z = search_vertical(Arr, x, ca);
		if (z.first != 0 && z.second != 0)
		{
			cout << "Vertical - Straight at " << z.first << ", " << z.second << endl;
			return;
		}
		else
		{
			char* x2 = strrev(x);
			z = search_horizontal(Arr, x2, ca);
			if (z.first != 0 && z.second != 0)
			{
				cout << "Horizontal - Reverse at " << z.first << ", " << z.second << endl;
				return;
			}
			else
			{
				z = search_vertical(Arr, x2, ca);
				if (z.first != 0 && z.second != 0)
				{
					cout << "Vertical - Reverse at " << z.first << ", " << z.second << endl;
					return;
				}
				else
				{
					cout << "Not Found" << endl;
				}
			}
		}
	}
}

int main(void)
{
	return 0;
}