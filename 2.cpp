//#include <iostream>
//#include <queue>
//#include <string.h>
//using namespace std;
//
//pair<int,int> map[100][100]; // info, days
//queue<pair<int, int> > q; // x, y
//bool check[100][100];
//
//int t, n, m, a, b;
//
////clockwise
//int dx[4] = { -1, 0, 1, 0 };  
//int dy[4] = { 0, -1, 0, 1 };
//
////virus spreading function
//void func() {
//	int x = q.front().first;
//	int y = q.front().second;
//
//	for (int i = 0; i < 4; i++) {
//		int nextX = x + dx[i];
//		int nextY = y + dy[i];
//
//		
//		if (nextX < n && nextY < n && nextX >= 0 && nextY >= 0 && check[nextX][nextY] == false && map[nextX][nextY].first == 0) {
//				map[nextX][nextY].first = 3;
//				map[nextX][nextY].second = map[x][y].second + 1;
//				check[nextX][nextY] = true; 
//
//				q.push(make_pair(nextX, nextY));
//		}
//	}
//	q.pop();
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//
//
//	cin >> t;
//	while (t--) {
//		cin >> n >> m;
//		memset(check, false, sizeof(check));
//
//		int cnt = 0; int cnt2 = 0;
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> map[i][j].first;
//				map[i][j].second = 0; // init
//
//				if (map[i][j].first == 0) cnt++;
//			}
//		}
//
//		while (m--) {
//			cin >> a >> b;
//
//			b = (b - (n - 1)) * (-1);
//
//			map[b][a].first = 3;
//			q.push(make_pair(b, a));
//
//		}
//
//		while (!q.empty()) {
//			func();
//		}
//
//	
//		int max = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (map[i][j].first == 3) cnt2++;
//				if (map[i][j].second > max) max = map[i][j].second;
//			}
//		}
//
//
//		if (cnt == cnt2) cout << max << "\n";
//		else cout << "-1\n";
//
//	}
//
//	return 0;
//}