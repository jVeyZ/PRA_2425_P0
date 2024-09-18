#include <iostream>
#include "rarm.h"
using namespace std;

rArm::rArm(int X, int Y, int Z, int state): x(X), y(Y), z(Z), hold(state){}

rArm::~rArm(){}

int rArm::getX(){
  return x;
}

int rArm::getY(){
  return y;
}

int rArm::getZ(){
  return z;
}

bool rArm::getState(){
  return hold;
}

void rArm::grab(){
  hold = true;
}

void rArm::release(){
  hold = false;
}

void rArm::move(int X, int Y, int Z){
  x = X;
  y = Y;
  z = Z;
}
