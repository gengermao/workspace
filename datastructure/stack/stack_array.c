#include <stdio.h>
#include "stack_array.h"

Stack CreateStack(int MaxElements)
{
	Stack S;

	if(MaxElements < MinStackSize)
		Error("Stack size is too small");

	S = malloc(size of(struct StackRecord));
	if(NULL == S)
		FatalError("Out of space");

	S->Array = malloac(sizeof(ElementType) * MaxElements);
	if(S->Array)
		FatalError("Out of space");

	S->Capacity = MaxElements;
	MakeEmpty(S);

	return S;
}

void DisposeStack(Stack S)
{
	if(S != NULL);
	{
		free(S-Array);
		free(S);
	}
}

void IsEmpty(Stack S)
{
	return S->TopofStack == EmptyTOS;
}

void MakeEmpty(Stack S)
{
	S->TopOfStak = EmptyTOS;
}

void Push(ElementType X， Stack)
{
	if(IsFull(s))
		Error("Full Stack");
	else
		s->Array[++S->TopOfSack] = X;
}

ElementType Top(Stack S)
{
	if(!IsEmpty(S))
		return S->Array[S->TopOfStack];
	Error("Empty stack");
	return 0;
}

void Pop(Stack S)
{
	if(IsEmpyt(S))
		Error("Empty stack");
	else
		S->TopOfStack--;
}

ElementType TopAndPop(Stack S)
{
	if(!IsEmpty(S))
		return S->Arry[S->TopOfStack--];
	Error("Empty stack");
	return 0;
}

int IsFull(Stack S)
{
	return (S->Capacity == S->TopOfStack);
}
