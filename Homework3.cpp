/*	[240920 ����3]
���ڿ� �� �ܾ� ���� ã��
3.int countword(const string& str){
	//���⸦ ä����.

	return ???
}
��¿���
string str = "���� ���￡ ��� ȫ�浿 �Դϴ� ��� �� �� �˾���";

���: 
���ڿ� �� �ܾ����  : 9
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
	string str = { "���� ���￡ ��� ȫ�浿 �Դϴ� ��� �� �� �˾���" };

	int num = countword(str);
	cout << "���ڿ� �� �ܾ���� : " << num;
}