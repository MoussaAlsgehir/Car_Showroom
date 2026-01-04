#include "Point.h"

#include <windows.h>		// Header File For Windows
#include <gl.h>			// Header File For The OpenGL32 Library
#include <glu.h>			// Header File For The GLu32 Library
#include <glaux.h>		// Header File For The Glaux Library
#include <cmath>

#include "CubeMy.h"
#include"PrimitiveDrawer.h"
CubeMy::CubeMy(Point pointStart,double Width,double Lingth):pointStart(pointStart),Width(Width),Lingth(Lingth){}
void CubeMy::DrowCube(){
	PrimitiveDrawer primitiveDrawerMy=PrimitiveDrawer();
	/*glColor3f(1.f,0.f,0.f);
	primitiveDrawerMy.DrawQuad(this->pointStart,Point(this->pointStart.x+this->Width,this->pointStart.y,this->pointStart.z),Point(this->pointStart.x+this->Width,this->pointStart.y+this->Lingth,this->pointStart.z),Point(this->pointStart.x,this->pointStart.y+this->Lingth,this->pointStart.z));
*/
	glColor3f(1.f,1.f,0.f);
	primitiveDrawerMy.DrawQuad(this->pointStart,Point(this->pointStart.x,this->pointStart.y,this->pointStart.z-this->Width),Point(this->pointStart.x,this->pointStart.y+this->Lingth,this->pointStart.z-this->Width),Point(this->pointStart.x,this->pointStart.y+this->Lingth,this->pointStart.z-this->Width));
/*
	glColor3f(1.f,1.f,1.f);
	primitiveDrawerMy.DrawQuad(this->pointStart,Point(this->pointStart.x+this->Width,this->pointStart.y,this->pointStart.z),Point(this->pointStart.x+this->Width,this->pointStart.y+this->Lingth,this->pointStart.z),Point(this->pointStart.x,this->pointStart.y+this->Lingth,this->pointStart.z));

		glColor3f(0.f,1.f,0.f);
	primitiveDrawerMy.DrawQuad(this->pointStart,Point(this->pointStart.x+this->Width,this->pointStart.y,this->pointStart.z),Point(this->pointStart.x+this->Width,this->pointStart.y+this->Lingth,this->pointStart.z),Point(this->pointStart.x,this->pointStart.y+this->Lingth,this->pointStart.z));

	glColor3f(0.f,0.f,1.f);
	primitiveDrawerMy.DrawQuad(this->pointStart,Point(this->pointStart.x+this->Width,this->pointStart.y,this->pointStart.z),Point(this->pointStart.x+this->Width,this->pointStart.y+this->Lingth,this->pointStart.z),Point(this->pointStart.x,this->pointStart.y+this->Lingth,this->pointStart.z));

	glColor3f(1.f,0.f,1.f);
	primitiveDrawerMy.DrawQuad(this->pointStart,Point(this->pointStart.x+this->Width,this->pointStart.y,this->pointStart.z),Point(this->pointStart.x+this->Width,this->pointStart.y+this->Lingth,this->pointStart.z),Point(this->pointStart.x,this->pointStart.y+this->Lingth,this->pointStart.z));*/
}