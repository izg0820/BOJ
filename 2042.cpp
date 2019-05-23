//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
////N = 수의 갯수
////M = 변경이 일어나느 횟수
////K = 구간의 합을 구하는 횟수
//int N, M,K;
//int a;
//
////node = 트리의 노드 번호
////start = node가 관리하는 합의 범위의 시작
////end = node가 관리하는 합의 범위의 종료 
//long long make(vector<long long> &num, vector<long long> &tree,int node,int start,int end)
//{
//	if (start == end)
//		return tree[node] = num[start];
//	else
//		return tree[node] = make(num, tree, node * 2, start, (start + end) / 2) + make(num, tree, node * 2 + 1, (start + end) / 2 + 1, end);
//}
//
////start~end안에 있는 수 변경 -> diff만큼 더해서 바꿈
////start~end안에 없는 수 변역 -> 탐색 중지
////리프노드 아닌것도 변경
//void update(vector<long long> &tree, int node, int start, int end, int idx, long long diff) {
//	if (idx < start || idx > end) return;
//	tree[node] = tree[node] + diff;
//	if (start != end) {
//		update(tree, node * 2, start, (start + end) / 2, idx, diff);
//		update(tree, node * 2 + 1, (start + end) / 2 + 1, end, idx, diff);
//	}
//}
//
////left~right 구하고자 하는 범위
////start~end 커버하는 범위
////구하는 범위가 맞지 않는 경우left>end || right<start -> return 0
////start == left && end == right 인 경우 -> 해당 노드의 값 리턴 
////한쪽만 맞는 경우
//long long sum(vector<long long> &tree, int node,int start, int end, int left,int right)
//{
//	if (left > end || right < start)
//		return 0;
//	if (left <= start && end <= right)
//		return tree[node];
//	return sum(tree, node * 2 ,start, (start + end) / 2, left, right) + sum(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right );
//}
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//
//	cin >> N >> M >> K;
//
//	vector<long long> num(N);
//
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//	}
//
//	int h = (int)ceil(log2(N));
//	int size = (int)pow(2, h + 1);
//	vector<long long> tree(size);
//	//make tree
//	make(num, tree, 1, 0, N-1);
//
//	for (int i = 0; i < M+K; i++) {
//		cin >> a;
//		if (a == 1) {
//			int b;
//			long long c;
//			cin >> b >> c;
//			//update
//			b -= 1;
//			//a=1 b번째 수 -> c로 변경
//			long long diff = c - num[b];
//			num[b] = c;
//			update(tree, 1, 0, N - 1, b, diff);
//		}
//		else if (a == 2) {
//			int b, c;
//			cin >> b >> c;
//			//sum
//			//a=2 b번째 수부터 c번째 수까지의 합
//			cout << sum(tree, 1, 0, N - 1, b - 1, c - 1) << "\n";
//		}
//	}	
//}
