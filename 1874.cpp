#include <iostream>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

int cnt=0;
queue<int> q;
void check(stack<int> a);
void show(stack<int> a);

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
		show(a);
		cout << "+" << endl;
		check(a);
		
	}


}

void check(stack<int> a) {
	

	if (q.front() == a.top()) {
		q.pop();
		a.pop();
		cout << "-" << endl;
		check(a);
		
	}

}

void show(stack<int> a) {
	for (int i = 0; i < a.size()+1; i++) {
		cout << a.top() << " ";
		a.pop();
	}

}

