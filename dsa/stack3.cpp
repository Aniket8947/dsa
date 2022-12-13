#include<iostream>
using namespace std;
struct stack{
    int arr[20];
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
 int pop(struct stack *s){   
    int t=0;
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
int main(){
    int i=0;
    char str[20];
    s= (struct stack*)malloc(sizeof(struct stack));
    create(s);
    cout<<"Enter the string \n";
    scanf("%[^\n]%*c", str);
    while(str[i]){
        i++;
    }
    for(int j=0;j<i;j++){
        push(s,str[j]);

    }
    for(i;i>0;i--){
        char t;
        t=pop(s);
        cout<<t;
    }
    cout<<"\n";

    return 0;
}