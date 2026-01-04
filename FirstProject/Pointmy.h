#ifndef POINT_H
#define POINT_H

class PointMy{
public:
	double x;
	double y;
	double z;

	PointMy(double x,
	double y,double z);

	double getX();
	double getY();
	double getZ();

	void setX(double x);
	void setY(double y);
	void setZ(double z);


};
#endif // !POINT_H
