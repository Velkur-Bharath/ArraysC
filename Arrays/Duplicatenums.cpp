#include<bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int>& nums){
  unordered_set<int> n;
  for(int i: nums){
    if(n.find(i)!=n.end()){
      return true;
    }
    else{
      n.insert(i);
    }
  }
  return false;
}

int main(){
  vector<int> nums {1,2,3,4};
  cout<<containsDuplicate(nums);
}
