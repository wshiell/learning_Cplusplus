#include <string>
#include <iostream>

using namespace std;

// Class definition for a Panda
class Panda
{
public:
	Panda();
	Panda(string pname, string pfav_food);
	static int id;
	int myid ;
	string name;
	string species;
	string type;
	string fav_food;
	void eat(string food_type,int quantity);		
	void treat(int fav_food_quantity);		
	void sleep(int time);
	void make_sound(int time);
	~Panda();
};

// implementation of the static int
int Panda::id = 0 ;

// implementation of the default Panda constructor
Panda::Panda()
{
	myid = id++ ;
	name = "?";
	species = "Panda";
	type = "herbivore";
	fav_food ="bambooooo";
	cout << "Created a " << species << " with ID: " << myid << endl;
}

// implementation of a Panda constructor taking a name and food type
Panda::Panda(string pname, string pfav_food)
{
	myid = id++ ;
	name = pname;
	species = "Panda";
	type = "herbivore";
	fav_food = pfav_food;
	cout << "Created a " << species << " with ID: " << myid << endl;
}

// implementation of the Panda eat function
void Panda::eat(string food,int quantity)
{
	cout << "Hi, I'm " << name << " and I'm a " << species << " munching " << quantity << " grams of " << food <<  endl;
}		

// implementation of the Panda treat function
void Panda::treat(int fav_food_quantity)
{
	cout << "Hi, I'm " << name << " and I'm a " << species << " munching " << fav_food_quantity << " tons of " << fav_food << " my favorite food!" << endl;
}		

// implementation of the Panda sleep function
void Panda::sleep(int time)
{
	cout << "Hi, I'm " << name << " and I'm a " << species << " sleeping for " << time << " hours" << endl;
}		

// implementation of the Panda make_sound function
void Panda::make_sound(int time)
{
	cout << "Hi, I'm " << name << " and I'm a " << species << " growling for " << time << " seconds" << endl;
}		

// implementation of the default Panda destructor
Panda::~Panda()
{
        cout << "Destroyed a " << species << " with ID: " << myid << endl ;
}

// Class definition for a Tiger
class Tiger
{
public:
	Tiger();
	Tiger(string pname, string pfav_food);
	static int id;
	int myid ;
	string name;
	string species;
	string type;
	string fav_food;
	int prey_killed;
	void eat(string food_type,int quantity);		
	void treat(int fav_food_quantity);		
	void sleep(int time);
	void make_sound(int time);
	void hunt();
	~Tiger();
};

// implementation of the static int
int Tiger::id = 0 ;

// implementation of the default Tiger constructor
Tiger::Tiger()
{
	myid = id++ ;
	name = "?";
	species = "Tiger";
	type = "carnivore";
	fav_food ="furry animals";
	prey_killed = 0 ;
	cout << "Created a " << species << " with ID: " << myid << endl;
}

// implementation of a Tiger constructor taking a name and food type
Tiger::Tiger(string pname, string pfav_food)
{
	myid = id++ ;
	name = pname;
	species = "Tiger";
	type = "carnivore";
	fav_food = pfav_food;
	cout << "Created a " << species << " with ID: " << myid << endl;
}

// implementation of the Tiger eat function
void Tiger::eat(string food,int quantity)
{
	cout << "Hi, I'm " << name << " and I'm a " << species << " munching " << quantity << " grams of " << food <<  endl;
}		

// implementation of the Tiger treat function
void Tiger::treat(int fav_food_quantity)
{
	cout << "Hi, I'm " << name << " and I'm a " << species << " munching " << fav_food_quantity << " tons of " << fav_food << " my favorite food!" << endl;
}		

// implementation of the Tiger sleep function
void Tiger::sleep(int time)
{
	cout << "Hi, I'm " << name << " and I'm a " << species << " sleeping for " << time << " hours" << endl;
}		

// implementation of the Tiger make_sound function
void Tiger::make_sound(int time)
{
	cout << "Hi, I'm " << name << " and I'm a " << species << " growling for " << time << " seconds" << endl;
}		

// implementation of the Tiger hunt function
void Tiger::hunt()
{
	prey_killed++ ;
	cout << "Hi, I'm " << name << " and I'm a " << species << " and I have made my " << prey_killed << " kills" << endl;
}		

// implementation of the default Tiger destructor
Tiger::~Tiger()
{
        cout << "Destroyed a " << species << " with ID: " << myid << endl ;
}

// main program
int main()
{
	Panda *pandas[3] ;
	Tiger *tigers[3] ;

	for ( int i = 0 ; i < 3 ; i++ )
	{
		pandas[i] = new Panda();	 // initialised
		pandas[i]->eat("Chili Bamboo",i+2) ;
		pandas[i]->treat(i+2) ;
		pandas[i]->sleep(16) ;
		pandas[i]->make_sound(12) ;
		tigers[i] = new Tiger();	 // initialised
		tigers[i]->eat("Meerkat Burgers",i+3) ;
		tigers[i]->treat(i+4) ;
		tigers[i]->sleep(7) ;
		tigers[i]->make_sound(50) ;
		tigers[i]->hunt() ;
	}
	for ( int i = 0 ; i < 3 ; i++ )
	{
		delete pandas[i] ;
		delete tigers[i] ;
	}
}
