/*	[240920 과제3]
문자열 내 단어 갯수 찾기
3.int countword(const string& str){
	//여기를 채워라.

	return ???
}
출력예시
string str = "나는 서울에 사는 홍길동 입니다 라고 할 줄 알았지";

결과: 
문자열 내 단어갯수는  : 9
*/
#include<iostream>
#include<vector>
using namespace std;

int countword(const string& str) {
	int count = 1;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}
	return count;
}

int main() {
	string str = { "나는 서울에 사는 홍길동 입니다 라고 할 줄 알았지" };

	int num = countword(str);
	cout << "문자열 내 단어갯수는 : " << num;
}