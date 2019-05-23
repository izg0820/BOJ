//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//
//	int n, k;
//	vector<int> nf;
//	vector<int> nkf;
//	vector<int> kf;
//	
//	nf.push_back(1);
//	nkf.push_back(1);
//	kf.push_back(1);
//
//	cin >> n >> k;
//
//	for (int i = 1; i <= n; i++) {
//		nf.push_back(nf[i - 1] * i);
//	}
//
//	for (int i = 1; i <= k; i++) {
//		kf.push_back(kf[i - 1] * i);
//	}
//
//	for (int i = 1; i <= n-k; i++) {
//		nkf.push_back(nkf[i - 1] * i);
//	}
//
//	cout << nf.back() / (kf.back()*nkf.back());
//}
//
////nck = n!/k!*(n-k)!
////nck mod p = m! mod p/ k!*(n-k)!^(p-2) mod p 