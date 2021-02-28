//Finding Minimum of a sequence

#include <stdio.h>
int main(void){
int len,start,mini,i;

int arr[7]={8,5,6,7,4,3,2};
len=7;
if(len==0){
printf("%", "Length of seq is 0. Nothing to do\n");
return 0;
}//When length of sequence is 0, this is printed
start=0;
printf("%s","\nUnsorted sequence = [");
for (int i=start;i<len;i=i+1)
  printf("%d,",arr[i]);
printf("%s","\b]\n");

mini=start;
for(i=start;i<len;i=i+1) {
   if (arr[i]<arr[mini]) mini=i;
}
printf("Minimum of unsorted sequence is = %d, its index is = %d\n",arr[mini],mini);
return 0;


}
//When len=1 for eg. arr[1]={3}, the minimum of the sequence is printed as 3
