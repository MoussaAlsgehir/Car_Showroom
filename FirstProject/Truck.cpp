
#include <windows.h>		// Header File For Windows
#include <gl.h>			// Header File For The OpenGL32 Library
#include <glu.h>			// Header File For The GLu32 Library
#include <glaux.h>		// Header File For The Glaux Library
#include <cmath>

#include "Cube.h"
#include"PrimitiveDrawer.h"
#include "Point.h"
#include "Truck.h"

Truck::Truck(){}
void Truck::DrowTruck(){
	glPushMatrix();

	glTranslated(-5,-10,0);

	PrimitiveDrawer primitiveDrawer = PrimitiveDrawer();

	glPushMatrix();
	Cube cube=Cube();
	cube.DrawCube(Point(0,0,0),-4,2,2);
	glColor3f(0.2f, 0.4f, 0.4f);
	glPopMatrix();
	//*-------------------
	glPushMatrix();
	cube.DrawCube(Point(0,0,0),2,2,2);
	glColor3f(0.2f, 0.4f, 0.4f); 
	primitiveDrawer.DrawQuad(Point(1,0.5,0),Point(1.75,0.5,0),Point(1.75,1.75,0),Point(1,1.75,0));
	glTranslated(0,0,-2);
	primitiveDrawer.DrawQuad(Point(1,0.5,0),Point(1.75,0.5,0),Point(1.75,1.75,0),Point(1,1.75,0));
	glPopMatrix();
	
	
	glPushMatrix();
	glTranslated(2,0,0);
	cube.DrawCube(Point(0,0,0),1.5,2,1);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.2f, 0.4f, 0.4f); // رمادي 
	glTranslated(1.5,0,0);
	auxSolidSphere(0.40);
	glTranslated(0,0,0.15);
	glColor3f(0.4f, 0.4f, 0.4f);
	auxSolidSphere(0.30);
	glPopMatrix();


	
	glPushMatrix();
	glColor3f(0.2f, 0.4f, 0.4f);
	glTranslated(1.5,0,-2);
	auxSolidSphere(0.40);
	glTranslated(0,0,-0.15);
	glColor3f(0.4f, 0.4f, 0.4f); 
	auxSolidSphere(0.30);
	glPopMatrix();
	
	
	
	glPushMatrix();
	glColor3f(0.2f, 0.4f, 0.4f); 
glTranslated(-2.75,0,0);
	auxSolidSphere(0.40);
	glTranslated(0,0,0.15);
	glColor3f(0.4f, 0.4f, 0.4f);
	auxSolidSphere(0.30);
	glPopMatrix();
	
	
	glPushMatrix();
	glColor3f(0.2f, 0.4f, 0.4f); 
	glTranslated(-2.75,0,-2);
	auxSolidSphere(0.40);
	glTranslated(0,0,-0.15);
	glColor3f(0.4f, 0.4f, 0.4f); 
	auxSolidSphere(0.30);

	glPopMatrix();

glPopMatrix();
}
