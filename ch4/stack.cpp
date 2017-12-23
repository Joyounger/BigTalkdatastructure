#include "stdio.h"    
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 /* 存储空间初始分配量 */

typedef int Status; 
typedef int SElemType; /* SElemType类型根据实际情况而定，这里假设为int */

/* 顺序栈结构 */
typedef struct
{
        SElemType data[MAXSIZE];
        int top; /* 用于栈顶指针 */
}Sqstack;
/* 两栈共享空间结构 */
typedef struct 
{
        SElemType data[MAXSIZE];
        int top1;	/* 栈1栈顶指针 */
        int top2;	/* 栈2栈顶指针 */
}SqDoubleStack;
typedef struct StackNode{
    SElemType data;
    struct StackNode* next;
}StackNode,*LinkStackPtr;
typedef struct LinkStack{
    LinkStackPtr top;
    int count;
}LinkStack;

Status LinkStackPush(LinkStack* s,SElemType e){
    LinkStackPtr p=(LinkStackPtr)malloc(sizeof(StackNode));  //StackNode* p;
    p->data=e;
    p->next=s->top;
    s->top=p;
    s->count++;  //!!!!
    free(p);
    return OK;

}
Status LinkStackPop(LinkStack* s,SElemType e){
    LinkStackPtr p=(LinkStackPtr)malloc(sizeof(StackNode));  //StackNode* p;
    p->data=e;
    p->next=s->top;

    free(p);
    return OK;

}

Status DPush(SqDoubleStack* s,SElemType e,int stacknum){
    if(s->top1+1==s->top2)
        return ERROR;
    if(1==stacknum){
       s->top1++;
       s->data[s->top1]=e;
    }
    else{
        s->top2--;
        s->data[s->top2]=e;
    }
    return OK;
}
Status DPop(SqDoubleStack* s,SElemType &e,int stacknum){
    if(s->top1==-1||s->top2==MAXSIZE)
        return ERROR;
    if(1==stacknum){
       
       e=s->data[s->top1];
       s->top1--;
    }
    else{
        
        e=s->data[s->top2];
        s->top2++;
    }
    return OK;

}
Status Push(Sqstack* s,SElemType e){
    if(s->top==MAXSIZE-1)
        return ERROR;
    s->top++;
    s->data[s->top]=e;
    return OK;

}
Status Pop(Sqstack *s,SElemType& e){
    if(s->top==-1)
        return ERROR;
    e=s->data[s->top];
    s->top--;
    return OK;

}

int main(){
    printf("test OK!\r\n");
    return 0;
}
