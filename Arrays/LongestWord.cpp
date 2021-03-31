#include <iostream>
#include <string>
using namespace std;

string LongestWord(string sen) {
  static int max =0;
  int i=0,counter=1;string sen1;
  while(1){
    cout<<"d ";
    if(sen[i]!=' '){
      counter++;
      sen1[i]=sen[i];
      max=counter;
    }
    else{
      if(max>counter){
        return sen1;
        break;
      }
      counter =1;
      sen1="";
    }
    i++;
  }
}

int main(void) {
  string s;
  getline(cin,s);
  cout << LongestWord(s);
  return 0;
}
