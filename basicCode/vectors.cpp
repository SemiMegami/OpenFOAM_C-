#include <iostream>
#include <cmath>
#include <string>
#include "vectors.h"
using namespace std;


void Vectors::setVector1(){
	cout << "Vector 1 input x :" << endl;
	cin >> vector1[0][0];
	cout << "Vector 1 input y :" << endl;
	cin >> vector1[1][0];
	cout << "Vector 1 input z :" << endl;
	cin >> vector1[2][0];
}

int Vectors::printVector1(){
	cout << "<" << vector1[0][0] << ", " << vector1[1][0]  << ", " << vector1[2][0] <<">"<<endl;
	return 0;
}

Vectors::Vectors(){

}

Vectors::~Vectors(){
	
}

void Vectors::setVector2(){
	cout << "Vector 2 input x :" << endl;
	cin >> vector2[0][0];
	cout << "Vector 2 input y :" << endl;
	cin >> vector2[1][0];
	cout << "Vector 2 input z :" << endl;
	cin >> vector2[2][0];
}

int Vectors::printVector2(){
	cout << "<" << vector2[0][0] << ", " << vector2[1][0]  << ", " << vector2[2][0] <<">"<<endl;
	return 0;
}

void Vectors::addVectors(){
	for(int i = 0; i < 3; i++){
		vectorSum[i][0] = vector1[i][0] + vector2[i][0];
	}
}

int Vectors::printAddedVectors(){
	cout << "<" << vectorSum[0][0] << ", " << vectorSum[1][0]  << ", " << vectorSum[2][0] <<">"<<endl;
	return 0;
}