//
//  main.cpp
//  Bitonic Sequence
//
//  Created by Kerima Hussen on 12/17/21.
//

#include <iostream>
#include <string>
using namespace std;


std::vector<int> bitonicSequence(<int> array){
   sort(array.begin(), array.end());
   int n = array.size();
   vector<int> ans(n);
   int i=0, j=n-1;
   int k=0;
   while(i<=j){
      ans[i] = array[k];
      i++; k++;
      if(i<j) {ans[j] = array[k];
      j--; k++;}
   }
   return ans;
}

