#include<iostream>
#include<string>
using namespace std;

class Point {
private:
	int x;
	int y;

public:

	Point(int x,int y) {
		this->x = x;
		this->y = y;

	}
	void distance(Point other) {
		int diffX = other.getX() - this->getX();
		int diffY = other.getY() - this->getY();
		cout << "·çÆ®"<<(diffX * diffX + diffY * diffY) << endl;
	}

	int getX() {
		return this->x;
	}

	int getY() {
		return this->y;
	}

	
};


int main() {
	Point a(1, 5);
	Point b(2, 7);
	a.distance(b);

	


}