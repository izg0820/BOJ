//#include <iostream>
//#include <stack>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//queue<int> q;
//stack<int> s;
//vector<bool> r;
//void check();
//
//int main() {
//
//	int t;
//	int temp;
//	int front;
//
//	cin >> t;
//	
//	for (int i = 0; i < t; i++) {
//		cin >> temp;
//		q.push(temp);
//	}
//	
//	for (int i = 1; i <= t; i++) {
//		s.push(i);
//		r.push_back(true);
//		check();
//	}
//
//	if (!q.empty()) {
//		cout << "NO\n";
//	}
//	else {
//		for (int i = 0; i < r.size(); i++) {
//			if (r[i])
//				cout << "+\n";
//			else
//				cout << "-\n";
//		}
//	}
//}
//
//void check() {
//	if (!q.empty() && !s.empty()) {
//		if (q.front() == s.top()) {
//			q.pop();
//			s.pop();
//			r.push_back(false);
//			check();
//		}
//	}
//}
