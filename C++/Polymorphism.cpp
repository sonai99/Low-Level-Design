#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    void makeSound()
    {
        cout << "animal is making a sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Dog is making a sound" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Cat is making a sound" << endl;
    }
};

int main()
{
    Animal myAnimal;
    Dog myDog;
    Cat myCat;

    myAnimal.makeSound();
    myDog.makeSound();
    myCat.makeSound();
    return 0;
}