
#include <windows.h>		// Header File For Windows
#include <gl.h>			// Header File For The OpenGL32 Library
#include <glu.h>			// Header File For The GLu32 Library
#include <glaux.h>		// Header File For The Glaux Library
#include <cmath>

#include "Cube.h"
#include"PrimitiveDrawer.h"
#include "Point.h"
#include "Park.h"

Park::Park(){}
void Park::DrowPark() {
  PrimitiveDrawer primitiveDrawer = PrimitiveDrawer(); glPushMatrix();
  glRotated(45, 1, 0, 0); glTranslated(4, -8, 0);
// ============================ // المربعات الأربعة (تغطي كل المساحة) // ============================
glColor3f(0.3f, 0.3f, 0.3f);
// front left
primitiveDrawer.DrawQuad( Point(-100, -20, 1), Point(0, -20, 1), Point(0, -20, -10), Point(-100, -20, -10) );
// front right
primitiveDrawer.DrawQuad( Point(0, -20, 1), Point(100, -20, 1), Point(100, -20, -10), Point(0, -20, -10) );
// back left
primitiveDrawer.DrawQuad( Point(-100, -20, -10), Point(0, -20, -10), Point(0, -20, -20), Point(-100, -20, -20) ); // back right
primitiveDrawer.DrawQuad( Point(0, -20, -10), Point(100, -20, -10), Point(100, -20, -20), Point(0, -20, -20) );

// ============================ // الخطوط البيضاء // ============================
glColor3f(1,1,1); // الخط العمودي
primitiveDrawer.DrawQuad( Point(-0.2, -20, 1), Point(0.2, -20, 1), Point(0.2, -20, -20), Point(-0.2, -20, -20) );
//
primitiveDrawer.DrawQuad( Point(-100, -20, -10.2), Point(100, -20, -10.2), Point(100, -20, -9.8), Point(-100, -20, -9.8) );
glPopMatrix();
}