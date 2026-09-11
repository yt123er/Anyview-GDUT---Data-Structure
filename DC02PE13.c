/*
[题目】若顺序栈的类型重新定义如下。试编写算法，实现顺序栈的判
空操作。
typedef struct {
ElemType *elem;//存储空间的基址
ElemType *top;// 栈顶元素的下一个位置
int size;//当前分配的存储容量
int increment;//扩容时，增加的存储容量
} Sqstack2;
要求实现下列函数:
Status StackEmpty_Sq2(SqStack2 S);
/*对顺序栈S判空。
若S是空栈，则返回TRUE;否则返回FALSE
  */

#include "allinclude.h"  //DO NOT edit this line
Status StackEmpty_Sq2(SqStack2 S) { 
    // Add your code here
    if (S.top == S.elem) { //检查S.top是否指向S.elem的基地址，如指向，则说明为空。
    
        return TRUE;
    }
    return FALSE;
}
