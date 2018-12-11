#include "Vec3D.h"
using namespace std;

int main()
{	
	vector3D vec;
	string vec3d;
	Vec3D konstruktor=Vec3D();
	
	double scalarProductResult;
	scalarProductResult = konstruktor.scalarProduct(konstruktor.vectors[0], konstruktor.vectors[1]);
	vec = konstruktor.vectorProduct(konstruktor.vectors[0], konstruktor.vectors[1]);
	vec3d = konstruktor.print(vec);
	
	cout << "Scalar Product: " << scalarProductResult << endl; 
	cout << "Vector Product: " << vec3d << endl;	

	return 0;
}
