#include<iostream>
using namespace std;

class Time
{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		Time();
		Time( int h, int m, int s);
		
		Time(const Time &r1);						//Copy Ctor
		void Display() const;
		void Accept();
		void CmpTime(const Time &r1,const Time &r2) const;
		int CalSec() const;
		void DiffTime(const Time &r1,const Time &r2) const;
		
		~Time();
};
