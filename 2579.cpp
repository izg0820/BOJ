//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int score[301];
//int n;
//int res = 0;
//int dp[301][3];
//
//void cal(int ans, int step, int current_p, int rep);
//int fmax(int a, int b, int i);
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int rep = 0;
//	int sum = 0;
//	int cp = 0;
//	int current_p;
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> score[i];
//	}
//
//
//	//cal(sum, 1, cp, rep);
//	//cal(sum, 2, cp, rep);
//	dp[0][0] = score[0]; dp[0][2] = 1;
//	dp[0][1] = score[1];
//	//dp[i][0] : i번째 계단에서의 최대값+ 걷기
//	//dp[i][1] : i번째 계단에서의 최대값+ 뛰기
//
//	for (int i = 1; i < n + 1; i++)
//	{
//		current_p = i;
//		dp[i][0] = fmax(dp[i - 1][0] + score[dp[0][2] + 1], dp[i - 1][0] + score[dp[0][2] + 2]);
//		dp[i][1] = fmax(dp[i - 1][1] + score[dp[0][2] + 1], dp[i - 1][1] + score[dp[0][2] + 2]);
//	}
//	//cout << max(dp[n + 1][0], dp[n + 1][1]);
//	//cout << res << "\n";
//}
//// i-1가 현재위치 
//int fmax(int a, int b, int i) {
//
//	if (a > b)
//	{
//		res++;
//		if (res != 3)
//			return a;
//		else
//			return -1;
//	}
//	else {
//		res = 1;
//		return b;
//	}
//}
//
//void cal(int sum, int step, int current_p, int rep) {
//
//	int cp = current_p + step;
//
//	if (step == 1)
//		rep++;
//	else
//		rep = 1;
//
//	if (cp < n && rep != 3) {
//		sum += score[cp];
//		cal(sum, 1, cp, rep);
//		cal(sum, 2, cp, rep);
//	}
//	else if (cp == n && rep != 3) {
//		sum += score[n];
//		res = max(res, sum);
//	}
//}
