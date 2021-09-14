#include <bits/stdc++.h>
using namespace std;

typedef vector<int> v_int;

int main (void)
{
	int days {0}, life {0}, spread {0};
	cin >> days >> life >> spread;
	v_int data {days+1, 0, 1};
	for(int i=2; i<=1000; ++i)
	{
		if(i >= life)
			data[i] = (spread*(data[i]+1)) - data[i-life];
		else
			data[i] = spread*(data[i]+1);
	}
	while(days--)
	{
		int querry;

	}

	return 0;
}