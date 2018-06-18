#include <stdio.h>
#include <stdlib.h>
int *join(int *,int *);
int *prod(int *,int *);
int main(void){
  int i;
  int X[100],Y[100];
  int *Xjoin,*Xprod;

  for(i=0;i<100;i++){
    //データ作成
    X[i]=0;
    Y[i]=0;
    if((i+1)%2==0){
      //偶数の場合i番目の要素を含む
      X[i]=1;
    }
    if((i+1)%5==0){
      //5の倍数の場合i番目の要素を含む
      Y[i]=1;
    }
  }
  Xjoin=join(X,Y);
  Xprod=prod(X,Y);

  printf("join.ver\n");
  for(i=0;i<100;i++)
    printf("%d ",Xjoin[i]);
  printf("\nprod.ver\n");
  for(i=0;i<100;i++)
    printf("%d ",Xprod[i]);

  return 0;
}
int *join(int *X,int *Y){
  int i,*Z;
  Z=(int *)malloc(sizeof(int)*100);
  for(i=0;i<100;i++){
    if(X[i]==1 || Y[i]==1)Z[i]=1;
    else Z[i]=0;
  }
  return Z;
}
int *prod(int *X,int *Y){
  int i,*Z;
  Z=(int *)malloc(sizeof(int)*100);
  for(i=0;i<100;i++){
    if(X[i]==1 && Y[i]==1)Z[i]=1;
    else Z[i]=0;
  }
  return Z;
}
