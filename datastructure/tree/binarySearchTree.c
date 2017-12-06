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

BinarySearchTree Insert(ElementType X, BinarySearchTree BST)
{
	if(NULL == BST)
	{
		T = malloc(sizeof(struct BinarySearchTreeNode));
		if(T == NULL)
			FatalError("Out of space !!!");
		else
		{
			BST->Element = X;
			BST->Left = BST->Right = NULL;
		}
	}else if(X < BST->Element)
		BST->Left = Insert(X,T->Left);
	else if(X > BST->Element)
		BST->Right = Insert(X,T->Right);

	return BST;
}
