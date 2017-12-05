#include <stdio.h>

BinarySearchTree MakeEmpty(BinarySearchTree BST)
{
	if( BST != NULL);
	{
		MakeEmpty(BST->Left);
		MakeEmpty(BST->Right);
	}
	return NULL;
}

Position Find(ElementType X, BinarySearchTree BST)
{
	if(NULL == BST)
		return NULL;
	if(X < BST->Element)
		return Find(X, BST->Left);
	else if(X > BST->Element)
		return Find(X,BST->Right);
	else 
		return BST;
}

Position FindMin(BinarySearchTree BST)
{
	if(NULL == BST)
		return NULL;
	else if (NULL == BST->Left)
		return BST;
	else 
		return FindMin(BST->Left);
}

Position FindMax(BinarySearchTree BST)
{
	if(BST != NULL)
		while(BST->Right != NULL)
			T = T->Right;
	return T;
}
