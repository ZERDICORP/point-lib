// point.inl

template <typename T>
Point<T>::Point(T y, T x)
{
	this -> y = y;
	this -> x = x;
}

template <typename T>
void Point<T>::operator =(Point& otherPoint)
{
	this -> y = otherPoint.y;
	this -> x = otherPoint.x;
}

template <typename T>
void Point<T>::operator +=(Point& otherPoint)
{
	this -> y += otherPoint.y;
	this -> x += otherPoint.x;
}

template <typename T>
void Point<T>::operator -=(Point& otherPoint)
{
	this -> y -= otherPoint.y;
	this -> x -= otherPoint.x;
}

template <typename T>
void Point<T>::operator *=(Point& otherPoint)
{
	this -> y *= otherPoint.y;
	this -> x *= otherPoint.x;
}

template <typename T>
void Point<T>::operator /=(Point& otherPoint)
{
	this -> y /= otherPoint.y;
	this -> x /= otherPoint.x;
}

template <typename T>
void Point<T>::operator +=(int iN)
{
	this -> y += iN;
	this -> x += iN;
}

template <typename T>
void Point<T>::operator -=(int iN)
{
	this -> y -= iN;
	this -> x -= iN;
}

template <typename T>
void Point<T>::operator *=(int iN)
{
	this -> y *= iN;
	this -> x *= iN;
}

template <typename T>
void Point<T>::operator /=(int iN)
{
	this -> y /= iN;
	this -> x /= iN;
}