#include <bits/stdc++.h>
using namespace std;

typedef vector<int> v_int;

int main(void)
{
    long int test_case {0};
    cin >> test_case;
    while (test_case--)
    {
        cin.tie(0);
        /* Code */
        long int n, m, k;
        long int c = 0;
        cin >> n >> m >>k;
        v_int v;
        v.assign(n+m+1, 0);
        for(int i=0; i<k; i++)
        {
        	int num;
        	cin >> num;
        	++v[num];
        }
        for(int i=0; i<=n; i++)
        {
        	if (v[i] > 1)
        		++c;
        }
        cout << c << " ";
        for(int i=0; i<=n; i++)
        {
        	if (v[i] > 1)
        		cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}