#include<iostream>
#include<string>
using namespace std;

class TodoItem {
private:
	string content;
	bool isCompleted;

public:
	TodoItem() :content(content), isCompleted(false) {
	}

	void setContent() {
		string todo;
		cout << "할 일 내용:";
		cin >> todo;
		this->content = todo;
	}

	void getContent() {
		cout << this->content << endl;

	}

	void complete() {
		this->isCompleted = true;
	}

	bool isComplete() const {
		return this->isCompleted;
	}
};

class TodoList {

private:
	TodoItem item[100];
	int itemCount;

public:
	TodoList() :itemCount(0) {}

	void addItem() {

		TodoItem temp;
		temp.setContent();
		item[this->itemCount++] = temp;
	}

	void showTodos() {
		for (int i = 0; i < this->itemCount; i++) {
			cout << i + 1;
			this->item[i].getContent();
		}
	}

};

int main() {
	TodoList myList;
	myList.addItem();
	myList.addItem();
	myList.showTodos();
}
