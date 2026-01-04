
#include <windows.h>		// Header File For Windows
#include <gl.h>			// Header File For The OpenGL32 Library
#include <glu.h>			// Header File For The GLu32 Library
#include <glaux.h>		// Header File For The Glaux Library
#include <cmath>

#include "Pointmy.h"
#include "PrimitiveDrawer.h"

PrimitiveDrawer::PrimitiveDrawer(){}
void PrimitiveDrawer::DrawPoint(PointMy point){

	glBegin(GL_POINTS);
	glVertex3d(point.x,point.y,point.z);
	glEnd();
}

void PrimitiveDrawer::DrawLine(PointMy pointStart,PointMy pointEnd){


	glBegin(GL_LINE);
	glVertex3d(pointStart.x,pointEnd.y,pointEnd.z);
	glVertex3d(pointEnd.x,pointEnd.y,pointEnd.z);
	glEnd();
}

void PrimitiveDrawer::DrawTriangle(PointMy v1, PointMy v2, PointMy v3){
  glBegin(GL_TRIANGLES);
    glVertex3f(v1.x, v1.y, v1.z);
    glVertex3f(v2.x, v2.y, v2.z);
    glVertex3f(v3.x, v3.y, v3.z);
    glEnd();
}

