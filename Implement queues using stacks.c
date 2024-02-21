
typedef struct {
    int *arr;
    int front;
    int rear;
    int size;
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
    queue->arr = (int*)malloc(sizeof(int) * 1000);
    queue->front = 0;
    queue->rear = -1;
    queue->size = 0;
    return queue;
}

void myQueuePush(MyQueue* obj, int x) {
    obj->arr[++(obj->rear)] = x;
    obj->size++;
}

int myQueuePop(MyQueue* obj) {
    obj->size--;
    return obj->arr[(obj->front)++];
}

int myQueuePeek(MyQueue* obj) {
    return obj->arr[obj->front];
}

bool myQueueEmpty(MyQueue* obj) {
    return obj->size == 0;
}

void myQueueFree(MyQueue* obj) {
    free(obj->arr);
    free(obj);
}
