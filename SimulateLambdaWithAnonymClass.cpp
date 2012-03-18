#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>

using namespace std;

class Integer {
	int i;
	public:
	Integer(int wartosc) {
		i = wartosc;
	}
	void setI(int wartosc) {
		i = wartosc;
	}
	int getI() { 
		return i ;
	}

};

class MyLambda
{
	public:
  virtual int Virtual(Integer & calkowita ) { cout << "Jestem w typie podstawowym" << endl; }
};


class NamedClass : public MyLambda
{
    virtual int Virtual(Integer & calkowita) { 
			cout << "czesc jestem w NamedClass" << endl; 
		}
};

class Screen
{
	vector<Integer> kontener;
	public:
	Screen() {

	//Anonym Lambdas initialized inside constructor
  class : public MyLambda
  {
  virtual int Virtual(Integer & calkowita) { 
		cout << "czesc jestem w klasie Anonimowej " << calkowita.getI() << endl; 
		calkowita.setI(calkowita.getI() + 15);
		}
  } First;

  class : public MyLambda
  {
  virtual int Virtual(Integer & calkowita) { 
		cout << "czesc jestem w klasie Anonimowej" << calkowita.getI() << endl;
		}
  } DisplayLambda;
	// *********************************************************

		kontener.push_back(5);
		kontener.push_back(10);
		NamedClass n;
		doSmthUsingLambda(First);
		doSmthUsingLambda(DisplayLambda);
	}

	void doSmthUsingLambda(MyLambda & lambda) {
		vector<Integer>::iterator it = kontener.begin();
		for ( ; it != kontener.end() ; it++ )
		{
			lambda.Virtual(*it);
		}
		
	}


};

int main()
{
  Screen child;
  //printf("ble: %i\n", ((Base*)&child.Second)->Virtual());

  return 0;
}
