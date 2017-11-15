#include <stdio.h>
#include "queue_array.h"

int IsEmpty(Queue Q)
{
	return 0 == Q->size;
}

void MakeEmpty(Queue Q)
{
	Q->Size = 0;
	Q->Front = 1;
	Q->Rear = 0;
}

static int Succ(int Value, Queue Q)
{
	if(++Value == Q->Capacity)
		Value = 0;
	return Value;
}

void Enqueue(ElementType X, Queue Q)
{
	if(IsFull(Q))
		Error("Full queue");
	else
	{
		Q->Size++；
		Q->Rear = Succ(Q->Rear, Q);
		Q->Array[Q->Rear] = X;
	}
}
