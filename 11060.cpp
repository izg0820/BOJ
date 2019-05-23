//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int N,val;
//int dp[1001];
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//
//	cin >> N;
//	vector<int> arr(N);
//	
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (i == 0) { 
//			for (int j = 1; j <= arr[i]; j++) {
//				if (i + j < N) {
//					dp[i + j] = dp[i] + 1;
//				}
//			}
//			continue;
//		}
//		if (dp[i] == 0)
//			continue;
//		val = arr[i];
//		for (int j = 1; j <= val; j++) {
//			if (i + j < N) {
//				if (dp[i + j] == 0)
//					dp[i + j] = dp[i] + 1;
//				else
//					dp[i + j] = min(dp[i + j], dp[i] + 1);
//			}
//		}
//	}
//
//	if (N == 1)
//		cout << 0;
//	else if (dp[N - 1] == 0)
//		cout << -1;
//	else
//		cout << dp[N-1];
//}