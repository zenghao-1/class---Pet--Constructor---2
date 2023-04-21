#include <iostream>
#include <string>
using namespace std;

struct Cat
{
	Cat();
	Cat(int age,float healthIndex):age(age),healthIndex(healthIndex){}
	int age;
	float healthIndex;

	void youHealthIndex();
};

Cat::Cat()
{
	cout << "you have a cat¡£"<<endl;
	age = 5;
	healthIndex = 78.f;
	youHealthIndex();
}

void Cat::youHealthIndex()
{
	cout << "you cat age is:" << age << endl;
	cout << "you cat health index is:" << healthIndex << endl;
}

int main()
{
	Cat cat = {2,98.f};
	Cat catNo1 = {3,68.f}; 
	Cat catNO2;
	for (int i=0; i < 5; i++)
	{
		cat.age += 1;
		cat.healthIndex += 0.1;
	}
	
	cat.youHealthIndex();
	catNo1.youHealthIndex();
	
}