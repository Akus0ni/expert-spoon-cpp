#include<iostream>
#include<cstring>
using namespace std;
#define SIZE 50

class Player
{
	char name[50];
	int age;
	char country[50];
public:
	Player();
	Player(char n[],int a , char c[]);
	~Player();

	void Accept();
	void Display() const;

	//setters and getters for name and age starts here...
	void SetName(char name[]);

	char* GetName();

	void SetAge(int age);

	int GetAge();
//setters and getters for name and age ends here...
	
};

void SortPlayer(Player p[],int n);
