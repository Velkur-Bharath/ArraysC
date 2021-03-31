#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> solve(vector<int> arr, int count){
  sort(arr.begin(),arr.end());int num=0;
  while(1){
    for(auto i=arr.begin(); i!= arr.end();++i){
      if(*i==0){
        ++num;
      }
  }
  while(num>0){
  for(auto i=arr.begin(); i!= arr.end();++i){
    if(*i==0){
      arr.erase(i);
      arr.push_back(0);
    }
  }
  num--;
}
  return arr;
}
}


int main() {
  vector<int> arr{0,1,0,3,12};int i = 0,count = 5;
  vector<int> v=solve(arr,count);
  for(auto i = v.begin();i!=v.end();++i){
    cout<<*i<<" ";
  }
  return 0;
}
