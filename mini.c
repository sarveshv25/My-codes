 #include <stdio.h>
int main () {
  int n1,n2,n3,n4;
  printf("Enter your number: ");
  scanf("%d,%d,%d,%d",&n1,&n2,&n3,&n4);
  if(n1<n2 && n1<n3 && n1<n4)
  printf("%d is minimum",n1);
  else if(n2<n1 && n2<n3 && n2<n4)
  printf("%d is minimum",n2);
  else if(n3<n1 && n3<n2 && n3<n4)
  printf("%d is minimum",n3);
  else 
  printf("%d is minimum",n4);
} 
