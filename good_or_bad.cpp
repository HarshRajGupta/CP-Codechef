#include <bits/stdc++.h>
using namespace std;

bool good_or_bad(string str)
{
	int cons {0}, vowel {0};
	for (auto i :str)
	{
		if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
		{
			cons = 0;
			++vowel;
			if (vowel >= 5)
			{
				return false;
			}
		}
		else if (i > 'a' && i <= 'z')
		{
			vowel = 0;
			++cons;
			if (cons >= 3)
			{
				return false;
			}
		}
		else
		{
			cons = 0;
			vowel = 0;
		}
	}
	return true;
}

int main(void)
{
    /* Code */
    string str;
    cin >> str;
    if (good_or_bad(str) == true)
    {
    	cout << "GOOD";
    }
    else
    {
    	cout << "BAD";
    }
    return 0;
}