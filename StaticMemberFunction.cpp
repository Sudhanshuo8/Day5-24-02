#include<iostream>

using namespace std;

class Demo
{
	static int a;
		   int b;
		   
     public:
	 		   
	 static void showA()
	  {
	     cout<<a<<endl;	
	  }  
	  
	  void showB()
	  {
	  	
	  	cout<<b;
	  }
};
    int Demo::a;
    int main()
    {
    	Demo d1;
    	Demo::showA();
    	d1.showA();
    	//d1.showB();
    	return 0;
	}
