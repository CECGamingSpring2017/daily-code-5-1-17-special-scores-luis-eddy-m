#include <ctime>
#include<iostream>
using namespace std;

int special[7];
int num;

int main() {

	srand(time(NULL));

	for (int i = 0; i < 7; i++) {
		num = rand() % 10;
		special[i] = num;
		cout << num << endl;
	}
	cout << "Strength: " << special[0];
	cout << "Peception: " << special[1];
	cout << "Endurance: " << special[2];
	cout << "Charisma: " << special[3];
	cout << "Intelligence: " << special[4];
	cout << "Agility: " << special[5];
	cout << "Luck: " << special[6];
}