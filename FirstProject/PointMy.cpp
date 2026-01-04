#include "Pointmy.h"

PointMy::PointMy(double x,double y ,double z):x(x),y(y),z(z){}

void PointMy::setX(double x){
	this->x=x;
}

void PointMy::setY(double y){
	this->y=y;
}

void PointMy::setZ(double z){
	this->z=z;
}

double PointMy::getX(){return x;}

double PointMy::getY(){return y;}

double PointMy::getZ(){return z;}
