//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int n,m;
//
//bool find(vector<int> &arr,int find_n) {
//	
//	int start = 0;
//	int end = arr.size() - 1;
//	
//	while (start <= end) {
//		int mid = (start + end) / 2;
//		if (arr[mid] < find_n)
//			start = mid + 1;
//		else if (arr[mid] > find_n)
//			end = mid - 1;
//		else  {
//			return true;
//		}
//	}
//	return false;
//}
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//
//	cin >> n;
//	vector<int> arr(n);
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	sort(arr.begin(), arr.end());
//
//	cin >> m;
//	vector<int> find_n(m);
//	for (int i = 0; i < m; i++) {
//		cin >> find_n[i];
//	}
//	int size = find_n.size();
//	for (int i = 0; i < size; i++) {
//		bool temp = find(arr, find_n[i]);
//		if (temp)
//			cout << "1\n";
//		else
//			cout << "0\n";
//		
//	}
//}