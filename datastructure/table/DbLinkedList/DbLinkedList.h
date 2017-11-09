#ifdef _linkedlist_h

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode DbList;
typedef PtrToNode Position;

DbList MakeEmpty(DbList L);
int IsEmpty(DbList L);
int IsLast(Position P, DbList L);
Position Find(ElementType X, DbList L);
void Delete(ElementType X, DbList L);
Position FindPrevious(ElementType X, DbList L);
void Insert(ElementType X, DbList L, Position p);
void DeleteDbList(DbList L);
Position Header(DbList L);
Position First(DbList L);
Position Advance(Position P);
ElementType Retrieve(Position p);

#endif

struct Node
{
	ElementType Element;
	Position Next;
	Position Prior;
};
