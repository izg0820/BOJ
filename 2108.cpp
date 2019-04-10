//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//void average(int T,vector<int> nums);
//void median(int T, vector<int> nums);
//void mode(int T, vector<int> nums);
//void range(int T, vector<int> nums);
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//	int temp;
//	vector<int> nums;
//
//	for (int i = 0; i < N; i++) {
//		
//		cin >> temp;
//		nums.push_back(temp);
//
//	}
//	sort(nums.begin(),nums.end());
//
//	cout << "\n";
//	average(N,nums);
//	median(N,nums);
//	mode(N,nums);
//	range(N,nums);
//}
//
//void average(int T, vector<int> nums) {
//	
//	int average=0;
//
//	for (int i = 0; i < T; i++) {
//		average += nums[i];
//	}
//	average = average / T;
//	
//	cout << average<<"\n";
//}
//
//void median(int T, vector<int> nums) {
//	
//	cout << nums[(T / 2)]<<"\n";
//}
//
//void mode(int T, vector<int> nums) {
//	int nums[4000];
//	int re_numbs[4000];
//
//}
//
//void range(int T, vector<int> nums) {
//
//	int max = 0;
//	int min = 4000;
//
//	for (int i = 0; i < T; i++) {
//		if (max < nums[i])
//			max = nums[i];
//	}
//
//	for (int i = 0; i < T; i++) {
//		if (min > nums[i])
//			min = nums[i];
//	}
//
//	cout << max - min << "\n";
//}
//
//
