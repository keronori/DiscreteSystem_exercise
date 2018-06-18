#include <stdio.h>
int number(int *);

int main(void){
  int i,X[100];
  for(i=0;i<100;i++){
    if((i+1)%2==0)X[i]=1;
    else X[i]=0;
  }
  X[1]=0;
  X[15]=0;
  printf("%d",number(X));
  return 0;
}

int number(int *X){
  int count=0;
  for(int i=0;i<100;i++)
    if(X[i]==1)count++;
  return count;
}
