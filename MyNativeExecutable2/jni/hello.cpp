#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "cup.h"

using namespace std;

///test1 find a value in a tree start
struct tNode {
	int data;
	
	struct tNode* left;
	struct tNode* right;
};

struct tNode* findValue(struct tNode* root, int data)
{
	if(root->data == data) return root;
	
	struct tNode* temp1 = findValue(root->left, data);
	if(temp1 != NULL) return temp1;
	
	struct tNode* temp2 = findValue(root->right, data);
	if(temp2 != NULL) return temp2;
	
	return NULL;
}
///test1 find a value in a tree end

///test2 revert in form of bits start
template <class T>
T revT(T t)
{
    T out = 0;

    for(int i=0; i<sizeof(T)*8; i++)
    {
        if(t & (1<<i))
          out |= 1 << (sizeof(T)*8-1-i);
    }

    return out;
}
///test2 revert in form of bits end

///file io start
bool fileWrite(const char* f)
{
	ofstream of(f);
	
	if(!of) {
		cout << "of fail" << endl;
		return false;
	}
	
	of << "aaa" << endl;
	
	of.close();
}

bool fileOpen(const char* f)
{
	//ifstream fs(filePath, ifstream::in);
	fstream fs;
	
	fs.open(f, fstream::in);
	
	cout << fs.rdbuf();
	
	
	/*if(!fs.is_open()) {
		cout << "open fail" << endl;
		return false;
	}*/
	
	fs.close();
	cout << "open ok" << endl;
	
	return true;
}
///file io end

int main()
{
	vector<int> myArrays;
	
	for(int i=0; i<10; i++)
	{
		myArrays.push_back(20-i);
		
		cout << myArrays[i] << endl;
	}
	
	sort(myArrays.begin(), myArrays.end());
	
	for(int i=0; i<myArrays.size(); i++)
	{
	    cout << myArrays[i] << endl;
	}
	
	Cup cup1;
	cup1.name = "cup1";
	
	char* cupHeader = "/sdcard/test.txt";
	bool result = fileWrite(cupHeader);
	result = fileOpen(cupHeader);
	
	
	std::cout << "Hello github" << std::endl;
}
