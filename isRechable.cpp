#include <iostream>

class Solution{
  public:
  bool isReachable(int targetX,int targetY){
      while(targetY != 0){
          int temp = targetY;
          targetY = targetX % targetY;
          targetX = temp;
      }
      if((targetX & (targetX - 1)) == 0){
          return true;
      }
      if(targetX == 1){
          return true;
      }
      return false;
  }
};

int main() {
    // Write C++ code here
    int targetx = 671088640;
    int targety = 939524096;
    
    Solution sol;
    std::cout << sol.isReachable(targetx,targety);

    return 0;
}