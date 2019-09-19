#include"Player.h"

Player::Player()/*name("NULL"),age(0),country(NULL)*/
{
	strcpy(name,"NULL");
	age = 0;
	strcpy(country,"NULL");
}


Player::Player(char n[],int a , char c[])/*name(n),age(a),country(c)*/
{
	strcpy(name,n);
	age = a;
	strcpy(country,c);
}

Player::~Player()
{

}

void Player::Accept()
{
	//cin.ignore(1);
	cout<<"\nEnter Player Name: ";
	cin.getline(name,49);
	cout<<"\nEnter Age: ";
	cin>>age;
	cin.ignore(1);
	cout<<"\nEnter Country: ";
	cin.getline(country,49);
}

void Player::Display() const
{
	cout<<"\nPlayer Name: "<<name<<"\nAge: "<<age<<"\nCountry: "<<country<<endl;
}



//setters and getters for name and age starts here...
	void Player::SetName(char name[])
	{
		strcpy(this->name,name);
	}

	char* Player::GetName()
	{
		return this->name;
	}

	void Player::SetAge(int age)
	{
		this->age = age;
	}

	int Player::GetAge()
	{
		return this->age;
	}
	//setters and getters for name and age ends here...





void SortPlayer(Player p[],int n)
{
	char temp[SIZE];			//Temp storage for name swapping
	int t;						//Temp storage for Age swapping
	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			if(strcmp(p[j-1].GetName(),p[j].GetName()) > 0) 
			{
				strcpy(temp,p[j-1].GetName());
				p[j-1].SetName(p[j].GetName());
				p[j].SetName(temp);
			}
			else if(strcmp(p[j-1].GetName(),p[j].GetName()) == 0)
			{
				if (p[j-1].GetAge() > p[j].GetAge())
				{
					t = p[j-1].GetAge();
					p[j-1].SetAge(p[j].GetAge());
					p[j].SetAge(t); 
				}
			}
		}
	}
}















