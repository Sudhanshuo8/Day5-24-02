#include<iostream>

using namespace std;

class box
{
	int l,b,h;
	int sum;
	
	public:
		box()
		{
			cout<<"Enter the values of l b h :"<<endl;
			cin>>l>>b>>h;
			cout<<l<<b<<h;
		}
		
		void show();
		
		box(int i ,int j,int k)
		{
		/*	l=i;
			b=j;
			h=k;
			sum=l+b+h;*/
			sum=i+j+k;
		
		}
};

	void box::show()
		{
	       cout<<"Sum :"<<sum<<endl;
		}
		
		int main()
		{
			box b1;
			box b2(4,2,3);
			b2.show();
			
			return 0;
			
			
	    }
