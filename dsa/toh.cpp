#include<iostream>
using namespace std;
void toh(int n, char x, char y, char z){
    if(n==1){
    printf("move disc %d from %c to %c\n", n,'x','z');
    return;
    }
    toh(n-1, x,z,y);
    printf("move %d from %c to %c\n", n,'x','y');
    toh(n-1,y,x,z);
}
int main(){
int n=3;
    char a, b, c;
   toh(n,a,b,c);
    return 0;
}
