// point.h

#include <cstring>

using namespace std;

#ifndef ZER__POINT_MODEL
	#define ZER__POINT_MODEL
		namespace zer
		{
			template <typename T>
			class Point
			{
				public:
					T y;
					T x;

					Point() {}
					Point(T y, T x);
					Point(Point&& otherPoint) {this -> operator =(otherPoint);}
					Point(Point& otherPoint) {this -> operator =(otherPoint);}
	
					bool operator ==(Point&& otherPoint) {return this -> operator ==(otherPoint);}
					bool operator ==(Point& otherPoint) {return this -> y == otherPoint.y && this -> x == otherPoint.x;}
					bool operator !=(Point&& otherPoint) {return this -> operator !=(otherPoint);}
					bool operator !=(Point& otherPoint) {return !(this -> y == otherPoint.y && this -> x == otherPoint.x);}

					void operator =(Point&& otherPoint) {this -> operator =(otherPoint);}
					void operator =(Point& otherPoint);
					void operator +=(Point&& otherPoint) {this -> operator +=(otherPoint);}
					void operator +=(Point& otherPoint);
					void operator -=(Point&& otherPoint) {this -> operator -=(otherPoint);}
					void operator -=(Point& otherPoint);
					void operator *=(Point&& otherPoint) {this -> operator *=(otherPoint);}
					void operator *=(Point& otherPoint);
					void operator /=(Point&& otherPoint) {this -> operator /=(otherPoint);}
					void operator /=(Point& otherPoint);
					void operator +=(int iN);
					void operator -=(int iN);
					void operator *=(int iN);
					void operator /=(int iN);
						
					Point operator +(Point&& otherPoint) {this -> operator +(otherPoint);}
					Point operator +(Point& otherPoint) {return Point<T>(this -> y + otherPoint.y, this -> x + otherPoint.x);}
					Point operator -(Point&& otherPoint) {this -> operator -(otherPoint);}
					Point operator -(Point& otherPoint) {return Point<T>(this -> y - otherPoint.y, this -> x - otherPoint.x);}
					Point operator *(Point&& otherPoint) {this -> operator *(otherPoint);}
					Point operator *(Point& otherPoint) {return Point<T>(this -> y * otherPoint.y, this -> x * otherPoint.x);}
					Point operator /(Point&& otherPoint) {this -> operator /(otherPoint);}
					Point operator /(Point& otherPoint) {return Point<T>(this -> y / otherPoint.y, this -> x / otherPoint.x);}
					Point operator +(int iN) {return Point<T>(this -> y + iN, this -> x + iN);}
					Point operator -(int iN) {return Point<T>(this -> y - iN, this -> x - iN);}
					Point operator *(int iN) {return Point<T>(this -> y * iN, this -> x * iN);}
					Point operator /(int iN) {return Point<T>(this -> y / iN, this -> x / iN);}
			};
			#include "point.inl"
		};
#endif