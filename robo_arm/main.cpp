#include "rarm.h"
#include <iostream>
using namespace std;

int main(){
  class rArm r1(0,0,0,false);

  cout << "Initial state: " << r1.getX() << " " << r1.getY() << " " << r1.getZ() << "   " << r1.getState();

  r1.grab();
  r1.move(4, 5, 4);

  cout << "Final state: " << r1.getX() << " " << r1.getY() << " " << r1.getZ() << "   " << r1.getState();

  return 0;
}
