#ifndef _POINT2D_H_
#define _POINT2D_H_


class Point2D{
public:

	//attributes
	float x;
	float y;

	//operators
	Point2D operator - (const Point2D& p);
	Point2D operator + (const Point2D& p);
	
	Point2D operator -= (const Point2D& p);
	Point2D operator += (const Point2D& p);
	
	const bool operator == (const Point2D& p);
	const bool operator != (const Point2D& p);

	//other methods
	const bool IsZero();
	void SetZero();
	const float DistanceTo(const Point2D& p);
};

#endif _POINT2D_H_