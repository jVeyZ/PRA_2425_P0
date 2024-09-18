#include <iostream>
using namespace std;

class rArm{
  private:
  int x, y , z;
  bool hold;

  public:
  rArm(int X, int Y, int Z, int state);
  ~rArm();
  int getX();
  int getY();
  int getZ();
  bool getState();
  void grab();
  void release();
  void move(int X, int Y, int Z);
  
};
