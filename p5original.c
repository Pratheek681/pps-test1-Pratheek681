#include<stdio.h>
int input();
int compare(int a,int b,int c);
int print(int a);

int main(){
input();
return 0;
}

int input(){
  printf("Enter 3 numbers");
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  compare(a,b,c);
}
int compare(int a,int b,int c){
  int max;
  max=a;
  if(b>max){
    max=b;
  }
  if (c>max){
    max=c;
  }
  print(max);
}
int print(int a){
  printf("The largest num is %d", a);
}