#ifndef __BUILDING_H__
#define __BUILDING_H__

#include <iostream>
using namespace std;

class Building
{
protected:

	char name[64];

public:

	Building(const char* pname)
	{
		sprintf_s(name, pname);
	}

	char* getName()
	{
		return name;
	}
};

#endif // !__BUILDING__