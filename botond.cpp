#include <iostream>
#include <cmath>

using namespace std;

class alak
{
public:
	alak() {}

		virtual float kerulet() = 0; // itt nem fejtem ki - majd csak a gyerekben ( = 0 ) miatt
		virtual float terulet() = 0;
int sz; // szelesseg
int m; // magassag


};


class kor : public alak // megadom kitol oroklom a storyt
{
public:
	kor(int x)
	{
		this->sz = this->m = x;	
	}
	float kerulet()
	{
		return 2 * sz * M_PI; 
	}
	float terulet()
	{
		return sz * sz * M_PI;
	}

};


class teglalap : public alak
{
public:
	teglalap(int x, int y)
	{
		this->sz = x;
		this->m = y;
	}
	float kerulet()
	{
		return 2 * sz + 2 * m; 
	}
	float terulet()
	{
		return sz * m;
	}

};


class negyzet : public alak
{
public:
	negyzet(int x)
	{
		this->sz = this->m = x;	
	}
	float kerulet()
	{
		return 4 * sz; 
	}
	float terulet()
	{
		return sz * sz;
	}

};

class pow 
{
public:

	pow(int x)
	{
		this->x = x;
	}
	int terulet()
	{
		return x * x;
	}
	int kerulet()
	{
		return x * 4;
	}
int x;		
};



int main()
{

	/*pow p(5);

	cout<<p.terulet()<<endl;
	cout<<p.kerulet()<<endl;*/
	
	alak* circle = new kor(2);
	alak* square = new negyzet(5);
	alak* rect = new teglalap(4,5);
	
	cout<< circle->kerulet() << " " << circle->terulet()<<endl;
	cout<< square->kerulet() << " " << square->terulet()<<endl;
	cout<< rect->kerulet() << " " << rect->terulet()<<endl;
	
	return 0;
}
