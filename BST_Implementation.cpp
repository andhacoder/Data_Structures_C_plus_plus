//Implementation of BST in C++
//Simple program to create BST and search a value in it
#include <iostream>

using namespace std;

//Definition of node for BST
struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
}

//Function to create a node in heap
BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
}

//To insert data in root node, returns address of root node
BstNode* insert(BstNode* root, int data){
    if(root == NULL){
        root = GetNewNode(data);
    }
    else if(data <= root->data){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}

//To search an element in a BST
bool search(BstNode* root, int data){
    if(root == NULL)
        return false;
    else if(data <= root->data){
        return search(root->left, data);
    }
    else return search(root->right, data);
}
int main(){
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	// Ask user to enter a number.  
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
}
