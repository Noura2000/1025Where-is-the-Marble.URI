#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<long long>v;
	long long q, n,x,y,i=0;
	while (cin >> q >> n&&q!=0&&n!=0)
	{
		i++;
		while (q--)
		{
			cin >> x;
			v.push_back(x);
		}
		cout << "CASE# " << i << ":\n";
		sort(v.begin(), v.end());
		while (n--)
		{
			cin >> y;
			long long dis = find(v.begin(), v.end(), y) - v.begin();
			dis += 1;
			if (find(v.begin(), v.end(), y)!=v.end()) cout << y << " found at " << dis << endl;
			else cout << y << " not found\n";
		}
		v.clear();
	}

	return 0;
}