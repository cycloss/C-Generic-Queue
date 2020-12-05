
#include "../src/queue.h"
#include <stdio.h>

#define len(x) sizeof(x) / sizeof(x[0])

int main() {

    queue* q = createQueue();

    int items[] = { 1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
        10 };

    for (int i = 0; i < len(items); i++) {
        enqueue(q, &items[i]);
        printf("Enqueueing: %i\n", items[i]);
    }

    for (void* itemp = dequeue(q); itemp; itemp = dequeue(q)) {
        printf("Dequeued: %i\n", *(int*)itemp);
    }

    freeQueue(q, false);
}