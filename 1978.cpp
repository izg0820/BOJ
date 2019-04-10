//#include <iostream>
//
//using namespace std;
//
//bool cntPrime(int num);
//
//int main() {
//	
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//	int N,result=0;
//	cin >> N;
//
//	int *nums = new int[N];
//
//	for (int i = 0; i < N; i++) {
//		cin >> nums[i];
//	}
//
//	for (int i = 0; i < N; i++) {
//
//		if (cntPrime(nums[i]))
//			result++;
//	}
//	delete[] nums;
//	cout << result << "\n";
//}
//
//bool cntPrime(int num)
//{
//	int cnt = 0;
//	int i;
//	if (num < 2) return false;
//
//	for (i = 1; i*i < num; i++) {
//		if (num%i == 0) cnt++;
//	}
//	if (i*i == num) cnt++;
//	if (cnt == 1)return true;
//	else return false;
//
//}