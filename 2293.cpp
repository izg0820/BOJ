//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	int k;
//	int dp[10001] = { 0, };
//	int temp;
//	vector<int> coin;
//
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		coin.push_back(temp);
//	}
//
//	dp[0] = 1;
//	for (int j = 0; j < n; j++) { //token 수만큼
//		for (int i = coin[j]; i <= k; i++) {//목표까지 
//			
//				dp[i] = dp[i] + dp[i-coin[j]];
//		}
//	}
//
//	cout << dp[k] << "\n";
//}
