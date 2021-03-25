#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Point
{
	double x;
	double y;
	double sum;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	Point()
	{
		x = y = int();
		cout << "Default Constructor:\t" << this << endl;
	}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t" << this << endl;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "Copy Constructor:\t" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	Point& operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "Copy Assignment:\t\t" << this << endl;
		return *this;
	}
	// Домашка ------------------------------------------------------------------------------------------------------------------------------------------------------------------
	Point& operator+(const Point& other)
	{
		this->sum = other.x + other.y;
		cout << "Plus Assignment:\t\t" << this << endl;
		return *this;
	}
	Point& operator-(const Point& other)
	{
		this->sum = other.x - other.y;
		cout << "minus Assignment:\t\t" << this << endl;
		return *this;
	}
	Point& operator*(const Point& other)
	{
		this->sum = other.x * other.y;
		cout << "Multiply Assignment:\t\t" << this << endl;
		return *this;
	}
	Point& operator/(const Point& other)
	{
		this->sum = other.x / other.y;
		cout << "Divide Assignment:\t\t" << this << endl;
		return *this;
	}

	void print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
	void printsumP(const Point& other)
	{
		cout << "X + Y = " << this->sum << endl;
	}
	void printsumM(const Point& other)
	{
		cout << "X - Y = " << this->sum << endl;
	}
	void printsumMul(const Point& other)
	{
		cout << "X * Y = " << this->sum << endl;
	}
	void printsumD(const Point& other)
	{
		cout << "X / Y = " << this->sum << endl;
	}
	double distance(const Point& other)const
	{
		double x_distance = other.x - this->x, y_distance = other.y - this->y, distance = sqrt(x_distance*x_distance + y_distance * y_distance); return distance;
	}
};

double distance(const Point& A, const Point& B)
{
	double x_distance = A.get_x() - B.get_x(), y_distance = A.get_y() - B.get_y(), distance = sqrt(x_distance*x_distance + y_distance * y_distance); return distance;
}

#define PLUS
//#define MINUS
//#define MULTIPLY
//#define DIVIDE

int main()
{
	setlocale(LC_ALL, "");
	system("color 0A");

	Point A(2, 3);
	A.print();
#ifdef PLUS
	A.operator+(A);
	A.printsumP(A);
#endif // PLUS

#ifdef MINUS
	A.operator-(A);
	A.printsumM(A);
#endif // MINUS

#ifdef MULTIPLY
	A.operator*(A);
	A.printsumMul(A);
#endif // MULTIPLY

#ifdef DIVIDE
	A.operator/(A);
	A.printsumD(A);
#endif // DIVIDE


	
//            ------------------------------------------------------------------------------------------------------------------------------------------------------------------
}