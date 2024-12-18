#include<stdio.h>
#define SIZE 5

typedef struct{
    int data[SIZE];
    int rear;
    int front;
}Queue;


void enQueue(Queue *q,int val){
    if(q->rear==SIZE-1){
        printf("Overflow");
    }else{
        if(q->rear == -1){
            q->front = 0;
        }
        q->rear = q->rear+1;
        q->data[q->rear] = val;
        printf("Value is push %d \n", val);
    }
}
void deQueue(Queue *q){
    if(q->front==-1)
    {
        printf("Underflow");
    }else{
        printf("the pop value is %d\n", q->data[q->front]);
        q->front = q->front+1;
    }
}
int main(){
    Queue q;
        q.front = -1;
        q.rear = -1;

        enQueue(&q, 10);
        enQueue(&q, 9);
        deQueue(&q);
        
    return 0;
}
