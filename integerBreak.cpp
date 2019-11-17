#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
int integerBreak(int n) {
	int r[100] = { 1 };
	r[0] = 1;
	vector<int> s;
	for (int j = 1; j <= n; j++)
	{
		int q = 1;
		for (int i = 1; i <= j; i++)
		{
			if (i == n)
			{
				continue;
			}
			if (q < i * r[j - i])
			{
				q = i * r[j - i];
				s.push_back(i);
			}
			//q = q > (i * r[j - i]) ? q : (i * r[j - i]);
		}
		r[j] = q;
	}
	for (auto it : s)
	{
		cout << it << endl;
	}
	return r[n];
}

int main()
{
	//cout << integerBreak(2) << endl;
	cout << integerBreak(10) << endl;
	return 0;
}
