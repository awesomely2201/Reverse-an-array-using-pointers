void reverseArray(int *a, int size)
{
  int b[size];
  int *c=a;
  for(int i=0;i<size;i++){
    b[i]=*c;*c++;}
  for(int i=size-1;i>=0;i--){
    *a=b[i];*a++;}
}
