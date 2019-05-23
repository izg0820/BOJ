//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
////N = N�� �л�
////X = X�� �������� ��Ƽ
////M = �ܹ��� ���� ���� 
////i��° ���� �����µ� Ti �ð� �Ҹ� 
//int N, X, M;
//
//int main() {
//	
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//
//	cin >> N >> M >> X;
//	vector < vector <int>> map(N,vector<int>(N));
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (i == j)
//				map[i][j] = 0;
//			else
//				map[i][j] = 1000000000;
//		}
//	}
//
//	int start, end, T;
//	for (int i = 0; i < M; i++) {
//		cin >> start >> end >> T;
//		if(map[start-1][end-1]>T)
//			map[start-1][end-1] = T;
//	}
//
//	for (int k = 0; k < N; k++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (map[i][j] > map[i][k] + map[k][j])
//					map[i][j] = map[i][k] + map[k][j];
//			}
//		}
//	}
//
//	int ans = 0;
//	for (int i = 0; i < N; i++)
//	{
//		if (map[i][X-1] + map[X-1][i] > ans)
//			ans = map[i][X-1] + map[X-1][i];
//	}
//	cout << ans << "\n";
//}