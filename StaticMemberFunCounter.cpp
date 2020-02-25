#include<iostream>

using namespace std;

class student
{
	int roll;
	static int count;
	
	public:
		void show();
		void counter();
		void stud();
	
		
};
	void student::stud()
		{
			cout<<"Enter the roll no"<<endl;
			cin>>roll;
			count++;
		}
		

    void student::show()
    {
    	cout<<"Roll :"<<roll<<endl;
	}
	void student::counter()
	{
		cout<<"count:"<<count;
		
    }
    int student::count;
    int main()
    {
    	student s1;
    	s1.stud();
    	s1.show();
    	s1.stud();
    	s1.show();
    	s1.counter();
    	{
    		
		}
    	
    	
    	
	}
