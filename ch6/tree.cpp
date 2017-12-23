#include <iostream>
using namespace std;
#include "string.h"
#include "stdio.h"    
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* 存储空间初始分配量 */

typedef int Status;		/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
#define MAX 100

typedef int TElemType;
typedef struct PTNode{
    TElemType data;
    int parent;
}PTNode;

typedef struct{
    PTNode nodes[MAXSIZE];
    int r,n;
}PTree;

//typedef char TElemType;
TElemType Nil=' '; /* 字符型以空格符为空 */

Status visit(TElemType e)
{
	printf("%c ",e);
	return OK;
}

typedef struct BiTNode  /* 结点结构 */
{
   TElemType data;		/* 结点数据 */
   struct BiTNode *lchild,*rchild; /* 左右孩子指针 */
}BiTNode,*BiTree;

void CreatebiTree(BiTree *T){
    TElemType ch;
    //fscanf("%c",&ch);
    if(ch=='#')
        *T=NULL;
    else
    {
        *T=(BiTree)malloc(sizeof(BiTNode));
        if(!*T)
            exit(OVERFLOW);
        (*T)->data=ch;
        CreatebiTree(&(*T)->lchild);
    }
}
void swap(char *&a,char *&b){
    char *temp;
    temp=a;
    a=b;
    b=temp;
}
void (*f)(void)
{
    printf("helloworld");
}
void cb(f){
    
}
int main(void){
  

  int d[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, *p = d;
  cout<<((*(d+1)))<<endl;
  // while(i<7&&p[i]%2i)
    char *str1="one world";
    char *str2="one dream";
    cout<<"stra: "<<str1<<endl;
    cout<<"strb: "<<str2<<endl;
    swap(str1,str2);
    cout<<"stra: "<<str1<<endl;
    cout<<"strb: "<<str2<<endl;
    BiTNode a,c,*b;
    //(*b)=c;
    //a.data=1;
    //b.data=2;
    cout<<"test OK!"<<endl;
    return 0;
}
