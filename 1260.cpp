//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> result_DFS;
//vector<int> result_BFS;
//vector<int> arr[1001];
//
//void DFSUtil(int vertex, bool visited[]);
//void BFSUtil(int vertex, bool visited[],queue<int> q);
//
//int main() {
//
//	int n,m,v;
//	bool visited_DFS[1001] = { false, };
//	bool visited_BFS[1001] = { false, };
//
//	queue<int> q;
//
//	cin >> n;
//	cin >> m;
//	cin >> v;
//
//	for (int i = 0; i < m; i++) {
//		int tempA, tempB;
//		cin >> tempA; cin >> tempB;
//		arr[tempA].push_back(tempB);
//		arr[tempB].push_back(tempA);
//		sort(arr[tempA].begin(), arr[tempA].end());
//		sort(arr[tempB].begin(), arr[tempB].end());
//	}
//
//	DFSUtil(v, visited_DFS);
//	BFSUtil(v, visited_BFS,q);
//
//	for (int i = 0; i < result_DFS.size(); i++) {
//		cout << result_DFS[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < result_BFS.size(); i++) {
//		cout << result_BFS[i] << " ";
//	}
//	return 0;
//}
//
//void DFSUtil(int vertext,bool visited[]) {
//
//	int v = vertext;
//	visited[v] = true;
//	result_DFS.push_back(v);
//	int size = arr[v].size();
//	for (int i = 0; i< size; i++) {
//		int n = arr[v][i];
//		if (!visited[n])
//			DFSUtil(n, visited);
//	}
//	return;
//}
//
//void BFSUtil(int vertex, bool visited[],queue<int> q) {
//	
//	int v = vertex;
//	visited[v] = true;
//	q.push(v);
//
//	while (!q.empty()) {
//		v = q.front();
//		result_BFS.push_back(q.front());
//		q.pop();
//		int size = arr[v].size();
//
//		for (int i = 0; i < size; i++) {
//			int n = arr[v][i];
//			if (!visited[n])
//			{
//				visited[n] = true;
//				q.push(n);
//			}		
//		}
//	}
//}