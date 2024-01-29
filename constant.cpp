#include<iostream>
#include<string>
using namespace std;

class Employee {

private:
	const int id; //변하지 않은건 const 쓰기
	string name; 
	mutable int access; //변할 수 있으니까 mutable 쓰기

public:
	Employee(int id, string name):id(id),name(name),access(0){}

	int getId() const {
		this->access++;
		return this->id;
	}

	string getName() {
		this->access++;
		return this->name;

	}


};