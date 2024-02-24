#include <iostream>
class Shape {
public:
	  void Calculate() {
		  std::cout << "Entadrenq hashvark anox metod e" << std::endl;
	  }
};

class Circle : public Shape {
public: 
	void method1() 
	{
		std::cout << "jarangi mrthod" << std::endl;
	}
};

class Rectangle : public Shape 
{
public: 
	void method2() 
	{
		std::cout << "Aystex karox e linel dzer methody" << std::endl;
	}
};

int main()
{
	Circle ob;
	ob.Calculate();
	ob.method1();
	Rectangle ob1;
	ob1.Calculate();
	ob1.method2();
	return 0;

}
