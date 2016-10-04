#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int BoxesCreated, BoxesDestroyed;

class Box {
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
	int l = 0, b = 0, h = 0;
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
	Box() { BoxesCreated++; }
	Box(int _l, int _b, int _h) { l = _l; b = _b; h = _h; BoxesCreated++; }
	Box(Box _box) { l = _box.l; b = _box.b; h = _box.h; BoxesCreated++; }
// Destructor
// ~Box()
// {

// }
	~Box() { BoxesDestroyed++; }

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box
	int getLength() { return l; }
	int getBreadth() { return b; }
	int getHeigth() { return h;  }
	long long CalculateVolume() { return (long long)l*b*h; }

//Overload operator < as specified
//bool operator<(Box &b)
	bool operator<(Box _box) {
		if (l < _box.l) return true;
		if (b < _box.b && l == _box.l) return true;
		if (h < _box.h && b == _box.b && l == _box.l) return true;
		return false;
	}
};
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box B)
namespace std {
	ostream& operator<<(ostream &out, Box _box) {
		return out << _box.l << ' ' << _box.b << ' ' << _box.h;
	}
}

void check2()
{
	int n;
	cin >> n;
	Box temp;
	for (int i = 0; i<n; i++)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			cout << temp << endl;
		}
		if (type == 2)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if (type == 3)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if (NewBox<temp)
			{
				cout << "Lesser" << endl;
			}
			else
			{
				cout << "Greater" << endl;
			}
		}
		if (type == 4)
		{
			cout << temp.CalculateVolume() << endl;
		}
		if (type == 5)
		{
			Box NewBox(temp);
			cout << NewBox << endl;
		}

	}
}

int main()
{
	BoxesCreated = 0;
	BoxesDestroyed = 0;
	check2();
	cout << "Boxes Created : " << BoxesCreated << endl << "Boxes Destroyed : " << BoxesDestroyed << endl;
}