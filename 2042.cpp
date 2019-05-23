//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
////N = ���� ����
////M = ������ �Ͼ�� Ƚ��
////K = ������ ���� ���ϴ� Ƚ��
//int N, M,K;
//int a;
//
////node = Ʈ���� ��� ��ȣ
////start = node�� �����ϴ� ���� ������ ����
////end = node�� �����ϴ� ���� ������ ���� 
//long long make(vector<long long> &num, vector<long long> &tree,int node,int start,int end)
//{
//	if (start == end)
//		return tree[node] = num[start];
//	else
//		return tree[node] = make(num, tree, node * 2, start, (start + end) / 2) + make(num, tree, node * 2 + 1, (start + end) / 2 + 1, end);
//}
//
////start~end�ȿ� �ִ� �� ���� -> diff��ŭ ���ؼ� �ٲ�
////start~end�ȿ� ���� �� ���� -> Ž�� ����
////������� �ƴѰ͵� ����
//void update(vector<long long> &tree, int node, int start, int end, int idx, long long diff) {
//	if (idx < start || idx > end) return;
//	tree[node] = tree[node] + diff;
//	if (start != end) {
//		update(tree, node * 2, start, (start + end) / 2, idx, diff);
//		update(tree, node * 2 + 1, (start + end) / 2 + 1, end, idx, diff);
//	}
//}
//
////left~right ���ϰ��� �ϴ� ����
////start~end Ŀ���ϴ� ����
////���ϴ� ������ ���� �ʴ� ���left>end || right<start -> return 0
////start == left && end == right �� ��� -> �ش� ����� �� ���� 
////���ʸ� �´� ���
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
//			//a=1 b��° �� -> c�� ����
//			long long diff = c - num[b];
//			num[b] = c;
//			update(tree, 1, 0, N - 1, b, diff);
//		}
//		else if (a == 2) {
//			int b, c;
//			cin >> b >> c;
//			//sum
//			//a=2 b��° ������ c��° �������� ��
//			cout << sum(tree, 1, 0, N - 1, b - 1, c - 1) << "\n";
//		}
//	}	
//}
