/*	[240920 과제2]
2. 가장 큰 값 찾기
*/
#include<iostream>
#include<vector>
using namespace std;

int FindMaxValue(const vector<int>& v) {
	int max = v[0];
	for (int i = 0; i < v.size(); i++) {
		if (max < v[i]) {
			max = v[i];
		}
	}
	return max;
}

int main() {
	vector<int>num = { 1,23,4,6,7 };

	int max = FindMaxValue(num);
	cout << max;
}