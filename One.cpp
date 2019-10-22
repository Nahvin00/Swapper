#include <iostream>
using namespace std;
void swap(float, float);
float x, y;

int main()
{
	cout << "Enter two numbers to be swapped: " << endl;
	cin >> x >> y;
	swap(x, y);
    return 0;
}

void swap(float x, float y) {
	cout << "The initial value of X = " << x << " and Y = " << y << endl;
	float swap = x;
	x = y;
	y = swap;
	cout <<"After swapping, "<< "X = " << x << " and Y = " << y<<endl;
}
