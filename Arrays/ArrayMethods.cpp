#include<iostream>

using namespace std;

class Array{
private:
  int *arr; //pointer array
  int totalNumbers=0; //total numbers in array
  int CapacityofArray=0; //number of elements that can be able to put in array
public:
  Array(){ //default constructor
    arr = new int[2]; //initially array has capacity of 2 elements
    totalNumbers=0;
    CapacityofArray=2;
  }

  void push(int num){
    if(totalNumbers==CapacityofArray){ // if capacity and total numbers are equal, then we need to increase the capacity
      int *temparr = new int[2*CapacityofArray]; //a temporary array is required to store the data of actual array and increase its capacity therefor
      for (int i = 0; i < CapacityofArray; i++) {
        temparr[i]=arr[i];
      }
      delete[] arr;
      CapacityofArray = CapacityofArray*2;
      arr = temparr;
    }
    arr[totalNumbers]=num; // this happens always when the push is called we assign the num to the last index of array
    totalNumbers++;
  }

  void insert(int num,int index){
    if(index == CapacityofArray){ // if last index
      push(num);
    }
    else{
      for (int i = index; i < totalNumbers; i++) { // puts present element in next element
        arr[i+1]=arr[i];
      }
      arr[index]=num;
      totalNumbers++;
    }
  }

  void pop(){
    totalNumbers--;//reduce the total elements in array
  }

  void pop(int index){ // remove an element in the index from array
    if(index == CapacityofArray){
      pop();
    }
    else{
      for (int i = index; i < totalNumbers; i++) {
        arr[i] = arr[i+1];
      }
      totalNumbers--;
    }
  }

  void push(int num,int index){
    if(index == CapacityofArray){
      push(num);
    }
    else{
      arr[index] = num;
    }
  }

  void length(){
    cout<<totalNumbers<<endl;
  }

  void print() { // printing the array
      for(int i = 0; i < totalNumbers; i++) {
          cout<<arr[i]<<"  ";
      }
      cout<<endl;
  }

  void reverse(){
    for (int i = totalNumbers-1; i >= 0 ; i--) {
      cout<<arr[i]<<" ";
    }
  }

};

int main() {
  Array a1;
  a1.push(12);
  a1.push(62);
  a1.push(45);
  a1.print();
  a1.insert(278,2);
  a1.print();
  a1.pop();
  a1.print();
  a1.push(23,1);
  a1.print();
  a1.pop(1);
  a1.print();
  a1.length();
  a1.push(127);
  a1.push(3497);
  a1.reverse();
  return 0;
}
