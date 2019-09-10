#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Point2D
{
public:
	Point2D() //konstruktor
	{
		this->x = 0;
		this->y = 0;
	}
	Point2D(int v, int w): x(v), y(w)
	{
		/*this->x = x;
		this->y = y;*/
	}
	
	void setX(int x)
	{
		this->x = x;
	}
	
	void setY(int y)
	{
		this->y = y;
	}
	
	int getX()
	{
		return this->x;
	}
	
	int getY()
	{
		return this->y;
	}
	
	virtual int getZ() = 0;
	
	void add(Point2D* p)
	{
		this->x += p->x;
		this->y += p->y;
	}
	void mult(int l)
	{
		this->x *= l;
		this->y *= l;
	}
	int mult(Point2D* p)
	{
		return this->x * p->x + this->y * p->y;
	}
	
	int operator *= (Point2D* p)
	{
		return this->x * p->x + this->y * p->y;
	}
	
	void operator *= (int l)
	{
		this->x *= l;
		this->y *= l;
	}
	
	void operator << (Point2D* p)
	{
		this->x = p->x;
		this->y = p->y;
	}
	virtual float getLength()
	{
		return sqrt(x * x + y * y);
	}
protected:
	int x;
	int y;
};

class Point3D : public Point2D
{
public:
	Point3D() : Point2D()
	{
		
		this->z = 0;
	}
	Point3D(int x, int y, int z) : Point2D(x,y)
	{
		
		this->z = z;
	}
	int getZ()
	{
		return this->z;	
	}
	virtual void setZ(int z)
	{
		this->z = z;
	}
	virtual float getLength()
	{
		return sqrt(x * x + y * y + z * z);
	}
private:
	int z;
};

int main()
{
	/*Point2D p(3,4);
	//p.setX(2);
	p.add(Point2D(2,2));
	p*=2;
	p<<Point2D(3,3);
	cout<<p.getX()<<endl;
	cout<<p.getY()<<endl;
	cout<<(p *= (Point2D(1,1)))<<endl;
	Point2D* q = new Point2D(1,2);
	p<< *q;*/
	
	/*Point2D* q = new Point2D(3,4);
	
	Point2D* p = new Point3D(3,4,5);
	cout<< p->getX()<< endl;
	cout<< p->getY()<< endl;
	cout<< p->getZ()<< endl;	
	cout<< p->getLength() << endl;
	cout<< q->getLength() << endl;*/
	
	vector<Point2D*> v;
	v.push_back(new  Point3D(1,2,3));
	return 0;
}
