#ifndef VECTORS_H
#define VECTOR_H
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
class Vectors{
	public:
		Vectors();
		~Vectors();
		void setVector1();
		int printVector1();
		void setVector2();
		int printVector2();
		void addVectors();
		int printAddedVectors();
		double vector1_length();
		double getVector1Length();
	protected:
	private:
		double vector1[3][1];
		double vector2[3][1];
		double vectorSum[3][1];
		double vectorLength;
};

#endif