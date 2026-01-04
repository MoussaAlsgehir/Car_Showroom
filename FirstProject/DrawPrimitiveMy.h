#ifndef PRIMITIVEDRAWER_H
#include "Point.h"
class PrimitiveDrawerMy{

public:
PrimitiveDrawerMy();
void DrawPoint(Point point);
void DrawLine(Point pointStart1 ,Point pointEnd2);
void DrawTriangle(Point v1,Point v2,Point v3);
void DrawQuad(Point v1,Point v2,Point v3,Point v4);

};
#endif