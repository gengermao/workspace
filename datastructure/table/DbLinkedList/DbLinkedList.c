#include <stdio.h>

#include "DbLinkedList.h"

/*Return true if L is Empty*/
int IsEmpty(DbList L)
{
	return L->Next == NULL;
}

/*Return true if P is the last position in list L*/ 
/*Parameter L is unused in this implemention*/
int IsLast(Position P, DbList L)
{
	return P->Next == NULL;
}

/*Retruen position of X in L; NULL is not found*/
Position Find(ElementType X, DbList L)
{
	Position p = L->Next;

	while(NULL != p && X != p->Element)
		p = p->Next;
	return p;
	/*
	while(NULL != p)
	{
		if(p->Element == X)
			return p;
		else
			p = p->Next;
	}*/
}

/*Delete first occurrence of X from a list*/
/*Assume use of a header node*/
void Delete(ElementType X, DbList T)
{
	Position p, TmpCell;

	p = FindPrevious(x,L);
	//还是否需要判断X是否在list里面
	if(!IsLast(p,L))
	{
		TmpCell = p->Next;
		p = TmpCell->Next->Prior; 
		p->Next = TmpCell->Next;
		free(TmpCell);
		//p->Next = p->Next->Next;不用这条是因为要释放掉这块地址
	}
}

/*If X is not found, then Next field of returned*/
/*Position is NULL*/
/*Assumes a header*/
Position FindPrevious(ElementType X, DbList L)
{
	Position p;

	if(NULL != p->prior)
		return p->prior;
	else
		return NULL;
	/*
	Position p,previouse;
	p = L->Next;

	while(NULL != p && X != p->Element)
	{	
		previouse = p;
		p = p->Next;
	}

	return previouse;
	*/
}

/*Insert(after legal position P)*/
/*Header implementation assumed*/
/*Parameter L is unused in this implementation*/
void Insert(ElementType X, DbList L, Position p)
{
	Position previouse, pnew;

	pnew = malloc(sizeof(struct Node));
	if(NULL == pnew)
		FatalError("Out of space!!!");
	pnew->Element = X;
	pnew->Next = p->Next;
	pnew->Prior = p;
	p->Next = pnew;
}
