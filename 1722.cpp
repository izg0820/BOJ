//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N,temp;
//
//unsigned long long f[21];
//bool check[21];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//
//	f[0] = 1;
//
//	for (int i = 1; i < 21; i++) {
//		f[i] = f[i - 1] * i;
//
//	}
//	cin >> N >> temp;
//
//
//	if (temp == 1) {
//
//		long long k;
//		cin >> k;
//		vector<int> ans(N);
//		for (int i = 0; i < N; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (check[j] == true)
//					continue;
//				if (f[N - i - 1] < k) {
//					k -= f[N - i - 1];
//				}
//				else {
//					ans[i] = j;
//					check[j] = true;
//					break;
//				}
//			}
//		}
//		int size = ans.size();
//		for (int i = 0; i < size; i++) {
//			cout << ans[i] << " ";
//		}
//		cout << "\n";
//	}
//	else if(temp==2)
//	{
//		vector<int> s(N);
//
//		for (int i = 0; i < N; i++) {
//			cin >> s[i];
//		}
//
//		long long ans = 0;
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 1; j < s[i]; j++) {
//				if (check[i] == false)
//					ans += f[N - i - 1];
//			}
//			check[s[i]] = true;
//		}
//
//		cout << ans + 1 << "\n";
//	}
//}