#include<iostream>
#include<string>
using namespace std;

class Lesson {
private:
	string lessonNane;
	int students;
	static int totalStudents;

public:
	Lesson(string l,int s) {
		this->lessonNane = l;
		this->students = s;
		this->totalStudents += s;
	}

	static void printTotalStudent() {
		cout << totalStudents << endl;
	}
};

int Lesson::totalStudents = 0; // ���� ��� �ܺο��� �ʱ�ȭ ����� ��

int main() {
	Lesson math("math", 10);
	Lesson eng("eng", 30);

	Lesson::printTotalStudent();
}
