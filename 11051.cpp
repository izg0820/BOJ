//#include <iostream>
//
//using namespace std;
//
//long long dp[1001][1001];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//
//	int n, k;
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++) {
//		dp[i][i] = 1;
//		dp[i][0] = 1;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= k; j++) {
//			if (i < j)
//				continue;
//			else
//				dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1])%10007;
//		}
//	}
//
//	if (k == 0)
//		cout << 1;
//	else
//		cout << dp[n][k];
//}
////n+1Ck+1 = nCk+nCk+1