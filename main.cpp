#include<iostream>

using namespace std;

int main() {
	char wubfer[3];
	int l = 0;

	int state = 0;

	const char exp[] = {'W', 'U', 'B'};
	char c;

	while (cin >> c) {
		if (c == exp[l]) {
			wubfer[l++] = c;
			if (l == 3) { 
				l = 0;
				if (state) { cout << ' '; state = 0; }
			}
		} else {
			if (l != 0) {
				for (int i = 0; i < l; i++) cout << wubfer[i];
				l = 0;
				state = 1;
			}
			if (c != 'W') {
				cout << c;
				state = 1;
			}
			else {
				l = 1;
				wubfer[0] = 'W';
			}
		}
	}
	for (int i = 0; i < l; i++) cout << wubfer[i];
} 
