#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	int goal; 
	int dp[101][10001];

	cin >> n; cin >> goal;

	dp[1][1] = 1;
	for (int i = 1; i < goal; i++) {
		if (goal >= n)
			dp[goal][n] = dp[goal][n - 1] + dp[goal - n][n];
		else
			continue;
	}

	cout << dp[goal][n] << " ";

}