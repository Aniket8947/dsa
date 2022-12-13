#include<iostream>
using namespace std;
struct dequeue{
    int a[20];
    int f;
    int r;

}*dq;
void create(struct dequeue *s){
    s->f=-1;
    s->r=-1;
}
void insertion(struct dequeue *dq, int element){
 dq->r++;
 dq->a[dq->r]= element; 

}
   
int main(){
    dq= (struct dequeue*)malloc(sizeof(struct dequeue));
    create(dq);


    return 0;

}