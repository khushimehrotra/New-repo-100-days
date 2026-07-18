#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100 // Define the maximum size for the stacks

typedef struct {
    int stack1[MAX_SIZE];
    int stack2[MAX_SIZE];
    int top1;
    int top2;
} MyQueue;

// Helper function to push to a stack
void pushToStack(int* stack, int* top, int x) {
    stack[++(*top)] = x;
}

// Helper function to pop from a stack
int popFromStack(int* stack, int* top) {
    return stack[(*top)--];
}

MyQueue* myQueueCreate() {
    MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
    queue->top1 = -1; // -1 means stack is empty
    queue->top2 = -1;
    return queue;
}

void myQueuePush(MyQueue* obj, int x) {
    pushToStack(obj->stack1, &(obj->top1), x);
}

int myQueuePop(MyQueue* obj) {
    // If stack2 is empty, move everything from stack1 to stack2
    if (obj->top2 == -1) {
        while (obj->top1 != -1) {
            int val = popFromStack(obj->stack1, &(obj->top1));
            pushToStack(obj->stack2, &(obj->top2), val);
        }
    }
    return popFromStack(obj->stack2, &(obj->top2));
}

int myQueuePeek(MyQueue* obj) {
    // If stack2 is empty, move everything from stack1 to stack2
    if (obj->top2 == -1) {
        while (obj->top1 != -1) {
            int val = popFromStack(obj->stack1, &(obj->top1));
            pushToStack(obj->stack2, &(obj->top2), val);
        }
    }
    return obj->stack2[obj->top2];
}

bool myQueueEmpty(MyQueue* obj) {
    return (obj->top1 == -1 && obj->top2 == -1);
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}
