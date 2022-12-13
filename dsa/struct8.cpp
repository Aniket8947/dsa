#include<iostream>
using namespace std;
struct student{
    int r;
    char name[20];
    int  m;

}s, *s1;

int main(){
     s1 = &s;
     scanf("%d%s%d", &s1->r, s1->name, &s1->m);
     printf("%d %s %d", s1->r, s1->name, s1->m );
    return 0;
}


