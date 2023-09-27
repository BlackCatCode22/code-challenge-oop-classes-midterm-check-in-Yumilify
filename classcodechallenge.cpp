#include <iostream>
#include <string>
#include <vector>
#include <list> 

using namespace std;

class Animal{
//static inline int numofAnimals = 0; 

private:
    string name = " ";
    string species = " ";
    inline static int numofAnimals = 0; 
public: 
    //static inline int numofAnimals = 0; 
    Animal(string theName, string theSpecies){
        name = theName;
        species = theSpecies;
        numofAnimals++;
    };
    string getAnimalName(){
        return name; 
    }
    string getAnimalSpecies(){
        return species;
    }
    int getNumOfAnimals(){
        return numofAnimals;
    }
};

int main()
{
    cout << "My Midterm Checkin assignment " << endl;

    cout << "Num of animals is: " << Animal::getNumOfAnimals <<endl; 

    Animal myNewAnimal01("Ragnar", "Hyena"); 
    Animal animalTwo("Anuraj", "Hyena");

    cout << "after making a couple of animals the number is: " << Animal::getNumOfAnimals << endl; 

   /* myNewAnimal01.name = "Name One"; 
    myNewAnimal01.species = "Hyena"; */

    cout << " The name of this animal is: " << myNewAnimal01.getAnimalName() << endl;
    cout << " The species is: " << myNewAnimal01.getAnimalSpecies() << endl; 
    cout << " The name of the second animal is: " << animalTwo.getAnimalName() << endl; 
    cout << " The species of the second animal is also: " << animalTwo.getAnimalSpecies() << endl; 

    //Animal::numofAnimals = 8; 
   // cout << "Attempting to change the number since its in a public class: " << Animal::numofAnimals << endl; 

    return 0; 
}