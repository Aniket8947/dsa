#include<iostream>
using namespace std;
struct stack{
    char arr[20];
    int top;

} *s;
void create(struct stack *s ){
    s->top=-1;
}
void push(struct stack *s, int  element){
 if(s->top == 19){
    cout<<"The stack is full \n";
 }
 else{ 
 s->top++;
 s->arr[s->top]=element;  
 } 
}
 char pop(struct stack *s){   
     char t;
 if(s->top == -1){
    cout<<"The stack is empty \n";
    
 }
 else{
    t= s->arr[s->top];
    s->top--;
 }
    return t;

}
int isempty(struct stack *s){                                      
   if(s->top == -1){
    return 1;
}
else{
    return 0;
}
}
int evaluate(int a, int b, char c){
    int st=0;
    switch(c){
        case '+': st= a+b;break;
        case '-': st= a-b;break;
        case '*': st= a*b;break;
        case '/': st= a/b;break;
        case '%': st= a%b;break;
    }
    return st;
}
int postfix(struct stack *s, char str[20]){
    int i=0;
    int a=0;
    int b=0;
    int value;
    char symb;
    while(str[i]){
        if(str[i]>='0' && str[i]<='9'){
            push(s,str[i]);
        }
        else{
            symb = str[i];
            a = pop(s)-'0';
            b=pop(s)-'0';
            value = evaluate(a,b,symb);
            push(s, value);
        }
        i++;
    }
    return value;
}

int main(){
    char str[20];
    int ans=0;
    s= (struct stack*)malloc(sizeof(struct stack));
    create(s);
    cout<<"enter the string \n";
    scanf("%[^\n]%*c", str);
    ans = postfix(s,str);
    cout<<ans<<"\n";

    return 0;
}