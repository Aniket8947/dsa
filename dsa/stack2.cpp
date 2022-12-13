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
    int n=0;
    int x=0;
     cout<<"Enter the no \n";
     cin>>n;
     char dat[16]= {'0', '1','2', '3', '4', '5', '6','7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}; 
    
    s = (struct stack*)malloc(sizeof(int));
    create(s);
    cout<<"Enter the conversion \n";
    cout<<" 1 for decimal to binary \n";
    cout<<"2 for decimal to octal \n";
    cout<<"3 for decimal to hexadecimal \n";
    cin>>x;
     switch(x)
     {
        case 1: 
         while(n!=0){
        int r=0;
        r=n%2;
        push(s,r);
        n=n/2;
    }
    while(!isempty(s)){
        int t=0;
        t=pop(s);
        cout<<t<<"\n";

    }
    break;
    case 2:
     while(n!=0){
        int r=0;
        r=n%8;
        push(s,r);
        n=n/8;
    }
    while(!isempty(s)){
        int t=0;
        t=pop(s);
        cout<<t<<"\n";

    }
     break;
     case 3:
      while(n!=0){
        int r=0;
        r=n%16;
        push(s,r);
        n=n/16;
    }
    while(!isempty(s)){
        int t=0;
        t=pop(s);
        cout<<dat[t]<<"\n";

    }
     

        
     }
  

    return 0;

}