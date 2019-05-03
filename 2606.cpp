#include <iostream>

using namespace std;
int parent[101];

int find(int x) {
	if (parent[x] == x)
		return x;
	else
	{
		//Root를 찾아감 
		int y = find(parent[x]); 
		parent[x] = y;
		return y;
	}
}
void _union(int x, int y) {
	x = find(x);
	y = find(y);
	if (x != y) {
		parent[y] = x;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, en, temp1, temp2, ans = 0;
	cin >> n >> en;
	for (int i = 1; i <= n; i++) {
		parent[i] = i;
	}
	
	for (int i = 0; i < en; i++) {
		cin >> temp1 >> temp2;
		_union(temp1, temp2);
		for (int i = 1; i <= n; i++) {
			cout << parent[i] << " ";
		}
		cout << "\n____________________________\n";
	}

	for (int i = 2; i <= n; i++) {
		if (find(i) == 1)
			ans++;
	}
	cout << ans << "\n";
}