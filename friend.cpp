#include<iostream>
#include<string>
using namespace std;

class Box {
private:
	double width;

public:
	Box(double w) :width(w) {}

	friend void printWidth(Box box);

}; 

void printWidth(Box box); {
	cout << box.width << endl;
}

int main() {
	Box box(5);

	printWidth(box);
}


