#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

queue* createQueue() {
    linkedList* l = createList();
    queue* q = malloc(sizeof(queue));
    if (q && l) {
        *q = (queue) { l };
        return q;
    } else {
        return NULL;
    }
}

/**
 * @return true if successfully enqueued item, false if failed
 */
bool enqueue(queue* q, void* itemp) {
    return appendToList(q->_l, itemp);
}

/**
 * @return a void pointer to the item removed. NULL if no items in queue
 */
void* dequeue(queue* q) {
    return removeFirst(q->_l);
}

/**
 * @return a void pointer to the item at the front of the queue. NULL if no items in queue
 */
void* peek(queue* q) {
    return getFirst(q->_l);
}

void clearQueue(queue* q, bool freeValues) {
    clearList(q->_l, freeValues);
}

void freeQueue(queue* q, bool freeValues) {
    freeList(q->_l, freeValues);
    free(q);
}