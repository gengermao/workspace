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
BinarySearchTree Delete(ElementType X, BinarySearchTree BST)
{
	Position TmpCell;

	if(NULL == BST)
		Error("Element not found");
	else if(X < BST->Element)
		BST->Left = Delete(X, BST->Left);
	else if(X > BST->Element)
		BST->Right = Delete(x, BST->Right);
	else if(BST->Left && BST->Right)
	{
		TmpCell = FindMain(BST->Right);
		BST->Element = TmpCell->Element;
		BST->Right = Delete(BST->Element, BST->Right);
	}else
	{
		TmpCell = BST;
		if(NULL == BST->Left)
			BST = BST->Right;
		else if(NULL == BST->Right)
			BST = BST->Right;
		free(TmpCell);
	}
	return T;
}
