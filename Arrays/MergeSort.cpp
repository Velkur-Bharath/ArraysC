#include<iostream>

using namespace std;

int *mergesort(int *arr1,int *arr2,int count1,int count2 ){
  if(count1 == 0){
    return arr2;
  }
  if(count2 == 0){
    return arr1;
  }
  int *arr = new int[count1+count2];
  int index = 0, index1 = 0, index2 = 0;
  while(index1<count1&&index2<count2){
    if(arr1[index1]<=arr2[index2]){
      arr[index]=arr1[index1];
      index1++;index++;
    }
    else{
      arr[index]=arr2[index2];
      index2++;index++;
    }
  }

  for (int i = index1; i < count1; i++) {
    arr[index]=arr1[i];
    index++;
  }

  for (int i = index2; i < count2; i++) {
    arr[index]=arr2[i];
    index++;
  }
  return arr;
}

int main(){
  int arr1[] = {1,2,3,4,5,6,7,45,566,554};
  int arr2[] = {3,4,5,6,7,8,9,10};
  int count1 = sizeof(arr1)/sizeof(arr1[0]);
  int count2 = sizeof(arr2)/sizeof(arr2[0]);
  int *mergearray = mergesort(arr1,arr2,count1,count2);
  for (int i = 0; i < count1 + count2; i++) {
    cout<<mergearray[i]<<" ";
  }
}
