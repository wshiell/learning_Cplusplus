#include <string>
#include <iostream>

using namespace std;

// Class definition for a Panda
class Panda
{
public:
	Panda();
	Panda(string pname, string pfav_food);
	string name;
	string species;
	string type;
	string fav_food;
	void treat(int fav_food_quantity);		
	~Panda();
};

// implementation of the default Panda constructor
Panda::Panda()
{
	name = "?";
	species = "panda";
	type = "herbivore";
	fav_food ="bambooooo";
}

// implementation of a Panda constructor taking a name and food type
Panda::Panda(string pname, string pfav_food)
{
	name = pname;
	species = "panda";
	fav_food = pfav_food;
}

// implementation of the Panda treat function
void Panda::treat(int fav_food_quantity)
{
	cout<<"Hi, I'm "<<name<<" and I'm a "<<species<<", munching "<<fav_food_quantity<<" tons of "<<fav_food<<", my favorite food!" << endl;
}		

// implementation of the default Panda destructor
Panda::~Panda()
{
}

// main program
int main()
{
	Panda *wao, *dao;
	wao = new Panda("Wao","bamboo");
	dao = new Panda("Dao","japanese bamboo");
	wao->treat(3);
	dao->treat(4);
}
