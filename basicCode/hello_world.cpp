#include "vectors.h"
using namespace std;

double vector_length(double x, double y, double z);
double vector_add(double vectorA[], double vectorB[]);


int main() {
	Vectors vec;
	vec.setVector1();
	vec.setVector2();
	vec.addVectors();
	vec.printAddedVectors();
	return 0;
}
