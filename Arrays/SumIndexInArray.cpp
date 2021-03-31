#include<bits/stdc++.h>
#include<vector>

using namespace std;

void naiveSolution(int arr[],int n, int sum){ //O(n^2)
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(arr[i]+arr[j]==sum && i!=j && i<j){
        cout<<i<<" "<<j<<endl;
      }
    }
  }
}

void BetterSolution(vector<int> arr, int sum){
  unordered_set<int> compliments;
  for (int i : arr) {
    if(compliments.find(i) != compliments.end()){
      cout<<"true";
    }
    else{
      compliments.insert(sum-i);
    }
  }
}

int main(){
  vector<int> arr {12,34,4,75,68} ;
  int sum = 38 ;
  int n = sizeof(arr)/sizeof(arr[0]);
  //naiveSolution(arr,n,sum);
  BetterSolution(arr,sum);
}
