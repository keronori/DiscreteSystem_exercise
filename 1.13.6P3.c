#include <stdio.h>
#include <stdlib.h>
int *cmpl(int *);
int main(void){
  int i,X[100],*Xc;
  for(i=0;i<100;i++){
    if((i+1)%2==0)X[i]=1;
    else X[i]=0;
  }
  X[0]=1;
  X[2]=1;
  Xc=cmpl(X);
  for(i=0;i<100;i++)
    printf("%d ",Xc[i]);
  return 0;
}

int *cmpl(int *X){
  int i,*Xc;
  Xc=(int *)malloc(sizeof(int)*100);
  for(i=0;i<100;i++){
    if(X[i]==1)Xc[i]=0;
    else Xc[i]=1;
  }
  return Xc;
}
