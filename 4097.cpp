//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//vector<int> p;
//
//void cal() {
//	int size = p.size();
//	int psum = 0;
//	int result = -987654321;
//	for (int i = 0; i < size; i++) {
//		psum = max(psum, 0) + p[i];
//		result = max(psum, result);
//	}
//	cout << result << "\n";
//}
////p[i] or p[i-1]까지 최대값 + p[i]
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//
//	int n,temp;
//
//	while (1) {
//		cin >> n;
//		if (n == 0)
//			break;
//		for (int i = 0; i < n; i++) {
//			cin >> temp;
//			p.push_back(temp);	
//		}
//		cal();
//		p.clear();
//	}
//}