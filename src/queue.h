#include <linkedList.h>

typedef struct {
    linkedList* _l;
} queue;

queue* createQueue();
bool enqueue(queue* q, void* itemp);
void* dequeue(queue* q);
void* peek(queue* q);
void clearQueue(queue* q, bool freeValues);
void freeQueue(queue* q, bool freeValues);