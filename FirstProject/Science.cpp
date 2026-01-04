
#include <windows.h>		// Header File For Windows
#include <gl.h>			// Header File For The OpenGL32 Library
#include <glu.h>			// Header File For The GLu32 Library
#include <glaux.h>		// Header File For The Glaux Library
#include <cmath>

#include "Cube.h"
#include"PrimitiveDrawer.h"
#include"Science.h"
Science::Science(){}

	void Science::DrawStar(float cx, float cy, float r)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);

    for (int i = 0; i <= 10; i++)
    {
        float angle = i * 3.14159f / 5.0f;
        float radius = (i % 2 == 0) ? r : r * 0.4f;
        float x = cx + cos(angle) * radius;
        float y = cy + sin(angle) * radius;
        glVertex2f(x, y);
    }

    glEnd();
}
float t = 0;

void Science::DrowScience(){
	glPushMatrix();
	glTranslated(-14,+6,-10);
	
	PrimitiveDrawer primitiveDrawer = PrimitiveDrawer();


	glColor3f(0.5f, 0.5f, 0.5f);
primitiveDrawer.DrawQuad( Point(0,5,0), Point(0,-10,0), Point(0.2,-10,0), Point(0.2,5,0) ); 


float wave = sin(t) * 0.1f;
glPushMatrix();
glTranslated(wave, 0, 0);

glColor3f(0.0f, 0.6f, 0.0f);
primitiveDrawer.DrawQuad( Point(0.2,3,0), Point(0.2,5,0), Point(5.2,5,0), Point(5.2,3,0) ); 
glColor3f(1.0f, 1.0f, 1.0f);
primitiveDrawer.DrawQuad( Point(0.2,1.5,0), Point(0.2,3,0), Point(5.2,3,0), Point(5.2,1.5,0) );
glColor3f(0.05f, 0.05f, 0.05f);
primitiveDrawer.DrawQuad( Point(0.2,0,0), Point(0.2,1.5,0), Point(5.2,1.5,0), Point(5.2,0,0) ); 
glColor3f(0.9f, 0.0f, 0.0f);
DrawStar(1.7f, 2.25f, 0.50f);
DrawStar(2.7f, 2.25f, 0.50f);
DrawStar(3.7f, 2.25f, 0.50f);
glPopMatrix();

	t += 0.01f;
	glPopMatrix();
}



