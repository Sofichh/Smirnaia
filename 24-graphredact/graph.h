#ifndef GRAPH_H
#define GRAPH_H

class Obj2D
{  public: 
	 virtual void move(double ax, double ay)=0;

	 virtual void show()=0;

	 virtual void rotate(double an)=0;

	 virtual void scale(double coef)=0;

};

class Circle: public Obj2D
{ private:
    double cx, cy, size;
public:
	Circle(double centerx,double centery, double _size): cx(centerx), cy(centery),size(_size){};

	 virtual void move(double ax, double ay);

	 virtual void show();

	 virtual void rotate(double an);

	 virtual void scale(double coef);
};


class Square: public Obj2D
{
  private: double cx, cy, size, vx,vy;
  public:
	Square(double centerx,double centery, double _size): cx(centerx), cy(centery),size(_size){};

  	
	 virtual void move(double ax, double ay);

	 virtual void show();

	 virtual void rotate(double an);

	 virtual void scale(double coef);
};

#endif