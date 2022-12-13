#include<iostream>
using namespace std;
struct queue{
    int a[20];
    int f;
    int r;

}*q;
void create(struct queue *q){
    q->f = -1;
    q->r = -1;
}
int isempty(){
    if(q->r == q->f){
        return 1;
    }
    else{
        return 0;
    }
}
void insert(struct queue *q,int n){
if(q->r == -1){
    q->r++;
    q->a[q->r] = n;
}
else{
    for(int i=q->r;i>=0;i--){
        if(n<(q->a[i])){
            q->a[i] = q->a[i];
            q->a[i] = n;
        }
        break;
    }
    q->r++;
    q->a[q->r] = n;
   
}

}
int deletion(struct queue *q){
    int x;
    if(isempty()){
        cout<<"queue is empty \n";
    }
    else{
        q->f++;
        x = q->a[q->f];
    }
    return x;
}

int main(){
    int t,n;

    q = (struct queue*)malloc(sizeof(struct queue));
    create(q);
    insert(q,10);
    t = deletion(q);
    cout<<t<<"\n";

    return 0;
}