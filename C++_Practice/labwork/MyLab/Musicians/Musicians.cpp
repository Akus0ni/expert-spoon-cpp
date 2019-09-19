#include"Musicians.h"


	void Musicians::String()
	{
		strcpy(instruments[0],"Veena");
		strcpy(instruments[1],"Guitar");
		strcpy(instruments[2],"Sitar");
		strcpy(instruments[3],"Sarod");
		strcpy(instruments[4],"Mandolin");
	}
	void Musicians::Wind()
	{		
		strcpy(instruments[0],"Flute");
		strcpy(instruments[1],"Clarinet");
		strcpy(instruments[2],"Sexophone");
		strcpy(instruments[3],"Nadhaswaram");
		strcpy(instruments[4],"Piccolo");
	}
	void Musicians::Perc()
	{
		strcpy(instruments[0],"Tabla");
		strcpy(instruments[1],"Maridangam");
		strcpy(instruments[2],"Bangos");
		strcpy(instruments[3],"Drums");
		strcpy(instruments[4],"Tambour");
	}
	void Musicians::show()
	{
		for(int i=0;i<5;i++)
		{
			cout<<instruments[i]<<endl;
		}
	}


















