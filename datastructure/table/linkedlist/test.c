#include <stdio.h>
#include <stdlib.h>

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

struct Node
{
	int Element;
	Position Next;
};

int main(int argc, char const *argv[])
{
	Position p;
	p = malloc(sizeof(struct Node));
	
	if(NULL == p->Next)
		printf("it is NULL\n");
	printf("%d\n",p);
	printf("%d\n",p->Next);
	return 0;
}