#include<bits/stdc++.h>

using namespace std;

void rotate(vector<int>& nums, int k){
  while(k--){
    nums.insert(nums.begin(),nums.back());
    nums.pop_back();
  }
  for(auto i =nums.begin();i!=nums.end();++i){
    cout<<*i<<" ";
  }

}

int main() {
  vector<int> v{1,2,3,4,5,6,7};
  int k=3;
  rotate(v,k);
  return 0;
}
