#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	char s[1000][1000];
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 5; j++){
			cin >> s[i][j];
		}
	}
	bool checker = false;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 5; j++){
			if(s[i][j] == 'O' && s[i][j+1] == 'O'){
				s[i][j] = '+';
				s[i][j+1] = '+';
				checker = true;
				break;
			}
		}
		if(checker) break;
	}
	if(checker){
		cout << "YES\n";
		for(int i = 0; i < n; i++){
			for(int j = 0; j < 5; j++){
				cout << s[i][j];
			}
			cout << "\n";
		}
	} else cout << "NO";
	cout << "\n";
	return 0;
}
