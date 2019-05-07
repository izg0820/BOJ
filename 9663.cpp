#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int N;
int *arr;
int result=0;

bool isPossible(int c);
void dfs(int r);

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;

	for (int i = 1; i <=N; i++) {
		arr = new int[16];
		//arr[��] = ��
		arr[1] = i;
		//�ι�° ����� ���� 
		dfs(2);
	}
	cout << result << "\n";
}

bool isPossible(int c) {

	//�� ������ ��ȿ�� ���� �Ȱ�ġ���� Ȯ��
	for (int i = 1; i < c; i++) {
		
		if (arr[i] == arr[c])
			return false;
		if (abs(i - c) == abs(arr[i] - arr[c]))
			return false;
	}
	return true;
}

void dfs(int r) {
	if (r > N) {
		result++;
	}
	else {
		for (int i = 1; i <= N; i++) {
			arr[r] = i;
			if (isPossible(r))
				dfs(r + 1);
			else
				continue;
		}
	}
}
