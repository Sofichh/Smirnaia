#ifndef RASPR_H
#define RASPR_H

class Method
{  protected: int *mas; 
   public: int i, size;

     Method(int sizemas){}

	 virtual void push(int chislo, int &i)=0;

	 virtual void pop(int &i)=0;

	 virtual void print()=0;

	 ~Method();
};


	class Fifo: public Method
{    public:
       Fifo(int sizemas): Method(sizemas){}

	 virtual void push(int chislo, int &i);

	 virtual void pop(int &i);

	 virtual void print();
};

	class Lifo:  public Method
{   
   public:
	  Lifo(int sizemas): Method(sizemas){}

	virtual void push(int chislo, int &i);

	 virtual void pop(int &i);

	virtual void print();
};
	#endif