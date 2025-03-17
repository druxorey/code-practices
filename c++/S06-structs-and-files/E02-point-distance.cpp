#include <iostream>
#include <cmath>

const int MAX_POINTS = 2;

struct point {
	float x = 0;
	float y = 0;
	float z = 0;
};


point getPoint(int index) {
	point p;
	printf("Enter the \e[0;33m[x y z]\e[0m coordinates of the point \e[0;33m%d\e[0m: ", index + 1);
	std::cin >> p.x >> p.y >> p.z;
	return p;
}


float getDistance(point p1, point p2) {
	return sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2) + pow((p1.z - p2.z),2));
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= POINT DISTANCE =========]\e[0m\n\n";

	point points[MAX_POINTS];
	for (int i = 0; i < MAX_POINTS; i++) points[i] = getPoint(i);

	float distance = getDistance(points[0], points[1]);
	printf("\nThe distance between the points is: \e[0;32m%.2f\e[0m\n\n", distance);

	return 0;
}
