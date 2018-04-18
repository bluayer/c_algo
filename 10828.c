#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10000

typedef struct _stack {
	int arr[MAX_SIZE];
	int top;
}Stack;

void StackInit (Stack *st) {
	st ->top = -1;
}

int isEmpty(Stack *st) {
	if (st -> top == -1)
		return 1;
	else 
		return 0;
}

int Size(Stack *st) {
	return st->top+1;
}

int isFull(Stack *st) {
	if(st->top >= MAX_SIZE)
		return 1;

	return 0;
}

void Push(Stack *st, int data){
	if(isFull(st) == 1) {
		return;
	}

	st -> arr[++(st->top)] = data;
}

int Pop(Stack *st) {
	if(isEmpty(st) == 1) {
		return -1;
	}

	return st -> arr[(st->top)--];
}

int Peek(Stack *st) {
	if(isEmpty(st) == 1) {
		return -1;
	}

	return st->arr[(st->top)];
}

int main() {
	int i;
	char str[6];
	Stack stack;
	int n, num;
	scanf("%d", &n);
    fgetc(stdin);    //버퍼 비우기 
    StackInit(&stack); 

    for(i=0; i < n; i++){
    
        scanf("%s", str);
        fgetc(stdin);    //버퍼 비우기. 
 
        if(!strcmp(str, "push")){    //push 인 경우 
            
            scanf("%d", &num);
            fgetc(stdin);    //버퍼 비우기. 
            Push(&stack, num);    
            
        }
        else if(!strcmp(str, "pop")){    //pop인 경우 
        
            printf("%d\n", Pop(&stack));
        
        }
        else if(!strcmp(str, "empty")){    //empty인경우 
            
            printf("%d\n", isEmpty(&stack));
            
        }
        else if(!strcmp(str, "size")){        //size인 경우  
        
            printf("%d\n", Size(&stack));
        
        }
        else if(!strcmp(str, "top")){        //top인 경우 
    
            printf("%d\n", Peek(&stack));
        
        }
    }
    
    
    return 0;  
}