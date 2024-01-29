#include<iostream>
#include<string>
using namespace std;

//1.할 일 추가
//3.할 일 완료
//4.해야 할 일 보기
//5.완료된 일들 보기
//6.삭제된 일들 보기
//7.종료하기

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
			cout << "할 일이 무엇인가?" << endl;
			cin >> w;
			tl += w;
			return tl;
		}

		string clearWork(string c, string cl) {
			cout << "완료한 일이 무엇인가?" << endl;
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
	Todo a("밥 먹기", "세수하기", "산책하기", "밥 먹기");
	a.addWork("독서","나가기");
	a.clearWork("나가기", "세수하기");
	

	//해결 못함



