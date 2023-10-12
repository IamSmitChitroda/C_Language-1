#include<stdio.h>

int main(){
  
  int size;
  
  printf("Enter size of an Array : ");
  scanf("%d",&size);

  int array[size];

  for(int i=0 ;i<size ;i++){
      printf("Enter Array[%d] : ",i);
      scanf("%d",&a[i]);
  }
  
  for(int i=0 ;i<size ;i++)
      printf("%d",i);
    
  printf("Size of an Array : %d",size);
}
