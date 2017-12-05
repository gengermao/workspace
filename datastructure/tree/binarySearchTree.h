#ifndef _BINARYSEARCHTREE_H

struct binarySearchTreeNode;
typedef struct binarySearchTreeNode *Position;
typedef struct binarySearchTreeNode *BinarySearchTree;

BinarySearchTree MakeEmpty(BinarySearchTree BST);
Position Fint(ElementType X, BinarySearchTree BST);
Position FindMin(BinarySearchTree BST);
Position FindMax(BinarySearchTree BST);
BinarySearchTree Insert(ElementType X, BinarySearchTree BST);
BinarySearchTree Delete(ElementType X, BinarySearchTree BST);
ElementType Retrieve(Position P);

#endif

struct binarySearchTreeNode
{
	ElementType Element;
	BinarySearchTree Left;
	BinarySearchTree Right;
}
