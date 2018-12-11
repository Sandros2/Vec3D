#include"Vec3D.h"

using namespace std;

void Vec3D::readFromFile(string fileName)
{
	std::ifstream file;
	file.open(fileName, std::ios::in);
	try
	{
		if (file.good())
			while (true)
			{

				file >> Vector.x >> Vector.y >> Vector.z;

				if (!file.fail())
					vectors.push_back(Vector);
				else
					break;

			}
		else
			throw 1;
	}

	catch (int number)
	{
		cout << "Error " << number << endl;
	}
	file.close();
}
void Vec3D::changeValues(double x, double y, double z, vector3D vector)
{
	vector.SetX(x);
	vector.SetX(y);
	vector.SetX(x);
}

string doubleToString(double value)
{

	std::ostringstream strs;
	strs << value;
	std::string str = strs.str();
	return str;
}

double vector3D::GetX()
{
	return x;
}
double vector3D::GetY()
{
	return y;
}
double vector3D::GetZ()
{
	return z;
}

void vector3D::SetX(double newX)
{
	x = newX;
}
void vector3D::SetY(double newY)
{
	y = newY;

}
void vector3D::SetZ(double newZ)
{
	z = newZ;
}

Vec3D::Vec3D()
{
	cout << "Choose if you want add new vector(1) or you want read data from file(2)" << endl;
	cin >> choice;


	while (true)
	{
		if (choice == 1 || choice == 2)
			break;
		else
		{
			cout << "You have only 2 options. Try again" << endl;
			cin >> choice;
		}
	}
	
	switch (choice) 
	{
	case 1:
		addNewVector();
		
		while (true)
		{
			cout << "Do you want add next one? [yes/no]" << endl;				
			cin >> answer;

			if (answer == "yes")
			{
				addNewVector();
			}
			else if (answer == "no")
			{
				break;
			}
			else
			{
				cout << "yes or no!" << endl;
				cin >> answer;
			}
		}
		break;
		
	case 2:
		
		//optional : write your own path to file
		//cout << "write your file's name: ";
		//cin >> fileName;
		//fileName += ".txt";
		fileName = "vectors.txt";
		readFromFile(fileName);
		break;
	}
}
Vec3D::~Vec3D()
{

}
void Vec3D::addNewVector()
{
	cout << "X:";
	cin >> Vector.x;
	cout << "Y:";
	cin >> Vector.y;
	cout << "Z:";
	cin >> Vector.z;
	vectors.push_back(Vector);
}
double Vec3D::scalarProduct(vector3D firstVector, vector3D secondVector)
{
	return (firstVector.x*secondVector.x) + (firstVector.y*secondVector.y) + (firstVector.z*secondVector.z);
}
vector3D Vec3D::vectorProduct(vector3D firstVector, vector3D secondVector)
{
	vector3D result;
	result.x = (firstVector.y*secondVector.z) - (firstVector.z*secondVector.y);
	result.y = (firstVector.z*secondVector.x) - (firstVector.x*secondVector.z);
	result.z = (firstVector.z*secondVector.y) - (firstVector.y*secondVector.x);
	return result;
}
string Vec3D::print(vector3D XYZ)
{
	return printVector="X:"+ doubleToString(XYZ.GetX()) + " " + "Y:" + doubleToString(XYZ.GetY()) +" " + "Z:"+ doubleToString(XYZ.GetZ());
}

