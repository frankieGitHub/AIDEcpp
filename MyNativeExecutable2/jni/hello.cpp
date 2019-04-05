#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
	
	
	std::cout << "Hello World!" << std::endl;
}
