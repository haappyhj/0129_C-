#include<iostream>
#include<string>
using namespace std;

//1.�� �� �߰�
//3.�� �� �Ϸ�
//4.�ؾ� �� �� ����
//5.�Ϸ�� �ϵ� ����
//6.������ �ϵ� ����
//7.�����ϱ�

class Todo {

private:
	string work;
	string todolist;
	string clearlist;
	string clearwork;

public:

	
	Todo(string w, string cl, string tl, string c) {
		this->work = w;
		this->clearlist = cl;
		this->todolist = tl;
		this->clearwork = c;
	}
		string addWork(string w, string tl) {
			cout << "�� ���� �����ΰ�?" << endl;
			cin >> w;
			tl += w;
			return tl;
		}

		string clearWork(string c, string cl) {
			cout << "�Ϸ��� ���� �����ΰ�?" << endl;
			cin >> c;
			cl += c;
			return cl;
		}
				void  seetodolist(string tl) {
					cout << tl << endl;
				}


				void seeclearlist(string cl) {
					cout << cl << endl;
				}


};

int main(){
	Todo a("�� �Ա�", "�����ϱ�", "��å�ϱ�", "�� �Ա�");
	a.addWork("����","������");
	a.clearWork("������", "�����ϱ�");
	

	//�ذ� ����



