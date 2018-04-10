#include <iostream>

using std::cout;
using std::endl;

int main(){
	float h = 0.1;
	float y = 1;
	float x = 0;
	float z = 0;
	float x1 = 0;
	int N = 3/h;
	int N1 = 10/h;
	for (int i = 0; i < N; i++){
		z = z - z*h;
		x = x + h;
		for (int j = 0; j < N1; j++){
			y = y - h*y;
			x = x + h;
			cout << x << " " << y <<endl;
		}
	}
	return 0;
}
