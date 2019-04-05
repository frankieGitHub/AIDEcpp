#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

///find a value in a tree start
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
///find a value in a tree end





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
	
	
	std::cout << "Hello github" << std::endl;
}
