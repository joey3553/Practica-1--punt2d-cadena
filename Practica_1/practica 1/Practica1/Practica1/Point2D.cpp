#include "Point2D.h"
#include <math.h> 

Point2D Point2D::operator - (const Point2D& p){
	Point2D temp;
	temp.x = x - p.x;
	temp.y = y - p.y;
	return temp;
}

Point2D Point2D::operator + (const Point2D& p){
	Point2D temp;
	temp.x = x + p.x;
	temp.y = y + p.y;
	return temp;
}

Point2D Point2D::operator -= (const Point2D& p){
	x -= p.x;
	y -= p.y;
	return (*this);
}

Point2D Point2D::operator += (const Point2D& p){
	x += p.x;
	y += p.y;
	return (*this);
}

const bool Point2D::operator == (const Point2D& p){
	if (x == p.x && y == p.y)
		return true;
	else
		return false;
}

const bool Point2D::operator != (const Point2D& p){
	if (x == p.x && y == p.y)
		return false;
	else
		return true;
}

const bool Point2D::IsZero(){
	if (x == 0.0f && y == 0.0f)
		return true;
	else
		return false;
}

void Point2D::SetZero(){
	x = 0.0f;
	y = 0.0f;
}

const float Point2D::DistanceTo(const Point2D& p){
	float temp_x, temp_y;
	temp_x = pow((x - p.x), 2.0f);
	temp_y = pow((y - p.y), 2.0f);
	return sqrt(temp_x + temp_y);
}