#ifndef CUP_H
#define CUP_H
#include <iostream>
#include <string>

using namespace std;

class Cup {
public:
	string name;
	int id;
	int container;
	
public:
    Cup();
    void theWayToDrink(void);
};

#endif
