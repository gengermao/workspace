#include <stdio.h>
#include "stack.h"

int Is Empty(Stack S)
{
	return S->Next == NULL;
}

void MakeEmpty(Stack S)
{
	if(NULL == S)
		Error("Must use CreateStack first");
	else
		while(!IsEmpty(s))
			Pop(S);
}

Stack CreateStack()
{
	/*	
	Stack s = malloac(sizeof(Stack));
	if(NULL == s)
		FatalError("Out of space");
	s->Next = NULL;
	*/
	
	Stack S;
	S = malloc(sizeof(struct Node));
	if(NULL == S)
		FatalError("Out of space");
	S->Next = NULL;
	MaKeEmpty(S);
	return S;
}

void Push(ElementType x, Stack S)
{
	PtrToNode TempCell;

	TempCell = malloc(sizeof(struct Node))
	if(NULL = TempCell)
		FatalError("Out of space");
	else
	{
		TempCell->Element = x;
		TempCell-Next = S->Next;
		S->Next = TempCell;

	}
}

ElementType Top(Stack S)
{
	if(!IsEmpty(S))
		return S->Next->Element;
	Error("Empty stack");
	return 0;
}

void Pop(Stack S)
{
	PtrToNode TempCell;

	/*
	if(S->Next->Next)
	{
		TempCell = S->Next;
		S->Next = S->Next->Next;
		free(TempCell);
	}else
	{
		TempCell = S->Next;
		S->Next = NULL;
		free(TempCell);
	}*/
	
	if(IsEmpty(S))
		Error("Empty stack");
	else
	{
		TempCell = S->Next;
		S->Next = S->Next->Next;
		free(TempCell);
	}

}

void DisposeStack(Stack S)
{
	PtrToNode TempCell;
		
	if(IsEmpty(S))
		Error("Empty stack");
	else
	{
		while(!IsEmpty(S))
		{
			TempCell = S->Next;
			S->next = S->Next->Next;
			free(TempCell);
		}
		free(S);
	};
}
