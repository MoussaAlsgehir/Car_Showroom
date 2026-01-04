#include "Point.h"
#include <windows.h>    // Header File For Windows
#include <gl.h>      // Header File For The OpenGL32 Library
#include <glu.h>      // Header File For The GLu32 Library
#include <glaux.h>    // Header File For The Glaux Library
#include <cmath>
#include "Cube.h"

Cube::Cube() {}






void Cube::DrawQuad(Point v1, Point v2, Point v3, Point v4) {

    glBegin(GL_QUADS);
    glVertex3f(v1.x, v1.y, v1.z);
    glVertex3f(v2.x, v2.y, v2.z);
    glVertex3f(v3.x, v3.y, v3.z);
    glVertex3f(v4.x, v4.y, v4.z);
    glEnd();

}


void Cube::DrawCube(Point point, int w, int l, int h) {
// القاعدة السفلية (أصفر غامق)
glColor3f(1.0f, 0.85f, 0.1f);
DrawQuad(point,
         Point(point.x + w , point.y , point.z ),
         Point(point.x + w , point.y , point.z - l),
         Point(point.x, point.y, point.z - l));

// الواجهة الأمامية (أصفر متوسط)
glColor3f(1.0f, 0.85f, 0.1f);
DrawQuad(point,
         Point(point.x + w, point.y, point.z),
         Point(point.x + w , point.y + h, point.z),
         Point(point.x, point.y + h, point.z));

// السقف العلوي (أصفر فاتح)
glColor3f(1.0f, 0.9f, 0.2f);
DrawQuad(Point(point.x, point.y + h, point.z),
         Point(point.x + w , point.y + h , point.z),
         Point(point.x + w, point.y + h, point.z - l),
         Point(point.x, point.y + h, point.z - l));

// ✅ الواجهة اليمنى الأمامية (رمادي غامق)
glColor3f(0.2f, 0.2f, 0.2f);
DrawQuad(Point(point.x + w , point.y , point.z),
         Point(point.x + w , point.y, point.z - l),
         Point(point.x + w , point.y + h , point.z - l),
         Point(point.x + w , point.y + h , point.z));

// الخلفية (أصفر برتقالي)
glColor3f(1.0f, 0.7f, 0.1f);
DrawQuad(Point(point.x , point.y, point.z - l),
         Point(point.x + w , point.y, point.z - l),
         Point(point.x + w, point.y + h , point.z - l),
         Point(point.x, point.y + h , point.z - l));

// الواجهة اليسرى (أصفر غامق)
glColor3f(0.9f, 0.8f, 0.1f);
DrawQuad(point,
         Point(point.x, point.y, point.z - l),
         Point(point.x, point.y + h , point.z - l),
         Point(point.x, point.y + h , point.z));
}
