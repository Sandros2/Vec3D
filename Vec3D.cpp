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
