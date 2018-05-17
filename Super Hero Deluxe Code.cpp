#include <iostream>  // cout
#include <vector>    // vector
#include <iterator>  
#include <string>    // string
#include <algorithm> // random_shuffle
#include <ctime>
#include <cstdlib>   // random generators (srand)

/* AUTHORED BY JONATHAN HODGE in C++ */
using namespace std;

// random generator function:
//int myrandom (int i) { return rand(time(0))%i;}

int main()
{
	// has program loop forever
	while (1){

		// random generator to shuffle
		srand(time(0));

		// vector of powers
		vector<string> powers;
		powers.push_back("Bone Manipulation");
		powers.push_back("Bow Prowess");
		powers.push_back("Chronokinesis (Time Control)");
		powers.push_back("Earth Manipulation");
		powers.push_back("Energy Manipulation");
		powers.push_back("Fire Manipulation");
		powers.push_back("Flight");
		powers.push_back("Food Pills");
		powers.push_back("Healing Powers");
		powers.push_back("Heat Vision");
		powers.push_back("Heightened Senses");
		powers.push_back("Ice Manipulation");
		powers.push_back("Invisibility");
		powers.push_back("Levitation");
		powers.push_back("Mass Manipulation");
		powers.push_back("Metal Manipulation");
		powers.push_back("Mind Control");
		powers.push_back("Necromancy");
		powers.push_back("Phasing");
		powers.push_back("Plant Manipulation");
		powers.push_back("Possession");
		powers.push_back("Power Ring");
		powers.push_back("Power Mimicry");
		powers.push_back("Puppeteering");
		powers.push_back("Regeneration");
		powers.push_back("Rot Touch");
		powers.push_back("Sand Manipulation");
		powers.push_back("Self Detonation/Explosion Powers");
		powers.push_back("Sensory Control");
		powers.push_back("Shadow Possession");
		powers.push_back("Shape-Shifting");
		powers.push_back("Sound Manipulation");
		powers.push_back("Super Elasticity");
		powers.push_back("Super Speed");
		powers.push_back("Super Strength");
		powers.push_back("Sword Prowess");
		powers.push_back("Telekinesis");
		powers.push_back("Telepathy");
		powers.push_back("Teleportation");
		powers.push_back("Utility Belt");
		powers.push_back("Water Manipulation");

		//shuffling the powers vector
		random_shuffle(powers.begin(), powers.end());

		// vector of arena's
		vector<string> arena;
		arena.push_back("Atlantis");
		arena.push_back("Castle");
		arena.push_back("City Full of Civilians");
		arena.push_back("Dark Cave");
		arena.push_back("Desert");
		arena.push_back("Dog's Back (We Are Tiny)");
		arena.push_back("Field Full of Bunnies");
		arena.push_back("Giant Dildo Island");
		arena.push_back("Haunted Cemetery");
		arena.push_back("Heaven");
		arena.push_back("Hell");
		arena.push_back("Janna's Sleeping Bag");
		arena.push_back("Jungle of Oversized Animals");
		arena.push_back("Kenny's House");
		arena.push_back("Krusty Krab");
		arena.push_back("Maze from Mazerunner");
		arena.push_back("Monster's Stomache");
		arena.push_back("Huge Pirate Ship in Middle of the Ocean");
		arena.push_back("Pokemon Forest");
		arena.push_back("Quidditch Pitch");
		arena.push_back("Space Station on the Moon");
		arena.push_back("Spontaneously Erupting Volcano");
		arena.push_back("Tropical Island");

		//shuffling the arena vector
		random_shuffle(arena.begin(), arena.end());

		// vector of items
		vector<string> items;
		items.push_back("6 Foot Dildo");
		items.push_back("Aids");
		items.push_back("Banana");
		items.push_back("Baseball Bat");
		items.push_back("Battle Axe");
		items.push_back("Battle Glove");
		items.push_back("Box of Puppies");
		items.push_back("Bubbles");
		items.push_back("Cannon");
		items.push_back("Chainsaw Sword");
		items.push_back("Crucifix");
		items.push_back("Dead Fish");
		items.push_back("Drill");
		items.push_back("Entei");
		items.push_back("Flamethrower");
		items.push_back("Flute");
		items.push_back("Frying Pan");
		items.push_back("Giant Ear of Corn");
		items.push_back("Gourd of Sand");
		items.push_back("Gourd of Water");
		items.push_back("Ice Cycle");
		items.push_back("Kitchen Sink");
		items.push_back("Lightsaber");
		items.push_back("Ninja Stars");
		items.push_back("Nun Chucks");
		items.push_back("Pistol");
		items.push_back("Portal Gun");
		items.push_back("Samsung S4");
		items.push_back("Scythe");
		items.push_back("Tiger");
		items.push_back("War Elephant");
		items.push_back("Water Gun");
		items.push_back("Whip");
		items.push_back("Wheelchair");
		items.push_back("Xbox 360 Controller");

		//shuffling the items vector
		random_shuffle(items.begin(), items.end());

		// vector of players for teams
		vector<string> players;
		players.push_back("Jonathan");
		players.push_back("Brett");
		players.push_back("Kenny");
		players.push_back("Ryan");

		//shuffling the players vector
		random_shuffle(players.begin(), players.end());


		// starting the game
		int number;
		cout << "Is this a new game? If so type 1." << endl << "If you just want to pick an arena type 2." << endl;
		cin >> number;

		if (number == 1){
			// assigning powers/items to players and picking the initial arena
			cout << "_____________________________" << endl;
			cout << "Kenny, your powers are :" << endl;
			cout << "1. " << powers[0] << endl;
			cout << "2. " << powers[1] << endl;
			cout << "3. " << powers[2] << endl;
			cout << "4. " << powers[3] << endl;
			cout << "5. " << powers[4] << endl << endl;
			cout << "And your items are :" << endl;
			cout << "1. " << items[0] << endl;
			cout << "2. " << items[1] << endl;
			cout << "_____________________________" << endl;
			cout << "Brett, your powers are :" << endl;
			cout << "1. " << powers[5] << endl;
			cout << "2. " << powers[6] << endl;
			cout << "3. " << powers[7] << endl;
			cout << "4. " << powers[8] << endl;
			cout << "5. " << powers[9] << endl << endl;
			cout << "And your items are :" << endl;
			cout << "1. " << items[2] << endl;
			cout << "2. " << items[3] << endl;
			cout << "_____________________________" << endl;
			cout << "Jonathan, your powers are :" << endl;
			cout << "1. " << powers[10] << endl;
			cout << "2. " << powers[11] << endl;
			cout << "3. " << powers[12] << endl;
			cout << "4. " << powers[13] << endl;
			cout << "5. " << powers[14] << endl << endl;
			cout << "And your items are :" << endl;
			cout << "1. " << items[4] << endl;
			cout << "2. " << items[5] << endl;
			cout << "_____________________________" << endl;
			cout << "Ryan, your powers are :" << endl;
			cout << "1. " << powers[15] << endl;
			cout << "2. " << powers[16] << endl;
			cout << "3. " << powers[17] << endl;
			cout << "4. " << powers[18] << endl;
			cout << "5. " << powers[19] << endl << endl;
			cout << "And your items are :" << endl;
			cout << "1. " << items[6] << endl;
			cout << "2. " << items[7] << endl;
			cout << "_____________________________" << endl;
			cout << "The fight will take place in :\n" << endl;
			cout << arena[1] << endl;
			cout << "_____________________________" << endl;
			cout << "The teams will consist of : \n" << endl;
			cout << "Team 1 will be " << players[0] << " and " << players[1] << endl;
			cout << "Team 2 will be " << players[2] << " and " << players[3] << endl;
		}

		else if (number == 2){
			cout << "_____________________________" << endl;
			cout << "The new arena will be :" << endl;
			cout << arena[1] << endl;
			cout << "_____________________________" << endl;
		}
		else {
			cout << "WTF ARE YOU DOING! HIT THE RIGHT KEY IDIOT!" << endl;
			cout << "FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU \n UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU \n UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU \n UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU \n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		}
		// for (vector<string>::iterator it=powers.begin(); it != powers.end(); ++it)
		// cout << *it << endl;
		system("pause");
		system("cls");
	}
	return 0;
}