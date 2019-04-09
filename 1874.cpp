#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int cnt=0;
queue<int> q;
void check(stack<int> a);

int main() {

	int t;
	int temp;
	int front;
	stack<int> a;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> temp;
		q.push(temp);
	}
	
	for (int i = 1; i <= t; i++) {
		a.push(i);
		cout << "+" << endl;
		check(a);
	}
	while(q.emp)
}
void check(stack<int> a) {
	
	for (int i = 0; i < a.size(); i++)
	{
		if (q.front() == a.top()) {
			q.pop();
			
			a.pop();
			check(a);
			cout << "-" << endl;
		}
	}
}

