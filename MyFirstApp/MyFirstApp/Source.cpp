# include <iostream> // import input-output library
# include <string>
using namespace std; // allows us to write cout
					 // instad of using std::cout


struct Vector // Vector object definition
{
	float x, y, z; // x, y, and z positions all floats.
};

struct Player
{
	string pName;
	string pType;
	int hp;
	Vector pPosition;
};

int main() 
{
	cout << "Hello World!" << endl;
	cout << "I am now a C++ programmer. " << endl;
	cout << "************** **************" << endl;
	cout << "*************   *************" << endl;
	cout << "***********       ***********" << endl;
	cout << "*********           *********" << endl;
	cout << "***********       ***********" << endl;
	cout << "*************   *************" << endl;
	cout << "************** **************" << endl;


	//---------- DECLARING VARIABLES -------------//
	int hp;
	hp = 300;

	cout << hp << endl;

	// int > int & float <> float
	int x = 38.87f;
	cout << x; // 38

	//------------- UNREAL GAME DEV EXAMPLE ----------//

	string name;
	int goldPieces;
	float hp;
	name = "William J. Parker"; // That's the name
	goldPieces = 322; // start with this much gold
	hp = 70.5f; // hit points are decimal valued.


	cout << "Character " << name << " has " << hp << " hp and "<< goldPieces << " gold.";

	//------------- OBJECT TYPES -----------------//

	// We defined Vector above the main method.
	// The computer now knows what a Vector is.
	// So we can create one.

	Vector v; // Create a Vector instance called v.
	v.x = 20, v.y = 30, v.z = 40; // Assign some values.
	cout << "A 3-space vector at " << v.x << ", " << v.y << ", " << v.z << endl;

	// Insantiating Player object here.

	Player player;
	player.pName = "Dyson";
	player.pType = "Warrior";
	player.pPosition.x = 20;
	player.pPosition.y = 50;
	player.pPosition.z = 30;
	player.hp = 100;

	//--------- POINTERS --------------//

	// The * characters usually make things special.

	Player* ptrPlayer; // Declaring pointer
	ptrPlayer = &player; // Linkage and & operator gets the memory address of a variable.

	// This linkage step is important, if you don't link the pointer to an object before you use the pointer, you will get a memory access violation.

	ptrPlayer->hp -= 33; // reduced the player's hp by 33
	ptrPlayer->pName = "John";// changed his name to John

	// cin
	cout << "What is your age? " << endl;
	int age;
	cin >> age;

	char character = 'A';
	int integer = 1;
	printf("integer %d, character %c\n", integer, character);

	return 0;		// "return" to the operating sys

	

}