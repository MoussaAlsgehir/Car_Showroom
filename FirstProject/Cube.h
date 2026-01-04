#ifndef CUBE_H
#define CUBE_H
#include"Point.h"
class Cube {
public:
  Cube();
  void DrawQuad(Point v1, Point v2, Point v3, Point v4);
  void DrawCube(Point point,int l,int w , int h);

};

#endif
