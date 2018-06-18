#include <stdio.h>
#include <stdlib.h>
int IsSubset(int *,int *);
int main(void){
  int i;
  int X[100],Y[100];

  for(i=0;i<100;i++){
    //データ作成
    if((i+1)%2==0){
      //偶数の場合i番目の要素を含む
      X[i]=1;
      Y[i]=1;
    }
    else{
      //奇数の場合i番目の要素を含まない
      X[i]=0;
      Y[i]=0;
    }
  }
  X[0]=1;
  printf("%d",IsSubset(X,Y));

  return 0;
}

int IsSubset(int *X,int *Y){
  int i;
  int check=1;
  for(i=0;i<100;i++){
    if(X[i]==1){
      //X[i]のi番目の要素を含む場合
      if(X[i]!=Y[i]){
	//X[i]i番目の要素を含み
	//Y[i]i番目の要素を含まないとき
	check=0;
      }
    }
  }
  return check;
}
