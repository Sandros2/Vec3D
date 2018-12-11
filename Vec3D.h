#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

struct vector3D 
{
	double x, y, z;
	double GetX();
	double GetY();
	double GetZ();

	void SetX(double newX);
	void SetY(double newX);
	void SetZ(double newX);
};

class Vec3D
{
private:
	int choice = 0;
	string answer;
	string fileName;
	
	vector3D Vector;
	string printVector;
	
	void readFromFile(string fileName);	

public:
	Vec3D();
	~Vec3D();
	
	void addNewVector();
	double scalarProduct(vector3D firstVector, vector3D secondVector);
	vector3D vectorProduct(vector3D firstVector, vector3D secondVector);
	string print(vector3D XYZ);
	vector<vector3D> vectors;
	
	void changeValues(double x, double y, double z, vector3D vector);
};
