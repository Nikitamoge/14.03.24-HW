#include<iostream>

using namespace std;

class Animal
{
protected:
    string name;
    int kg;
public:
    Animal() = default;
    Animal(string n, int k)
    {
        name = n;
        kg = k;
    }
    virtual void Print() = 0;
};

struct IAnimal
{
    virtual void Eat() = 0;
    virtual void Move() = 0;
    virtual void Drink() = 0;
};

struct IBird
{
    virtual void Fly() = 0;
};

struct ISwim
{
    virtual void Swim() = 0;
};

class Cat : public Animal, public IAnimal  
{
   string color;
public:
   Cat(string n, int k, string c) : Animal(n, k)
   {
         color = c;
   }
   void Print()
   {
         cout << "Name: " << name << endl;
         cout << "Kg: " << kg << endl;
         cout << "Color: " << color << endl;
   }
   void Eat()
   {
         cout << "Cat eats\n";
   }
   void Move()
   {
         cout << "Cat moves\n";
   }
   void Drink()
   {
         cout << "Cat drinks\n";
   }
};

class Parrot : public Animal, public IAnimal, public IBird
{
public:
    Parrot(string n, int k) :Animal(n, k) {}
    void Print()
    {
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
    }
    void Eat()
    {
        cout << "Parrot eats\n";
    }
    void Move()
    {
        cout << "Parrot moves\n";
    }
    void Fly()
    {
        cout << "Parrot flies\n";
    }
    void Drink()
    {
        cout << "Parrot drinks\n";
    }
};

class Penguin : public Animal, public IAnimal, public ISwim
{
public:
    Penguin(string n, int k) : Animal(n, k) {}
    void Print()
    {
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
    }
    void Eat()
    {
        cout << "Penguin eats\n";
    }
    void Move()
    {
        cout << "Penguin moves\n";
    }
    void Swim()
    {
        cout << "Penguin swims\n";
    }
    void Drink()
    {
        cout << "Penguin drinks\n";
    }
};

class Elephant : public Animal, public IAnimal
{
public:
    Elephant(string n, int k) : Animal(n, k) {}
    void Print()
    {
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
    }
    void Eat()
    {
        cout << "Elephant eats\n";
    }
    void Move()
    {
        cout << "Elephant moves\n";
    }
    void Drink()
    {
        cout << "Elephant drinks\n";
    }
};

class Duck : public Animal, public IAnimal, public IBird, public ISwim
{
public:
    Duck(string n, int k) : Animal(n, k) {}
    void Print()
    {
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
    }
    void Eat()
    {
        cout << "Duck eats\n";
    }
    void Move()
    {
        cout << "Duck moves\n";
    }
    void Fly()
    {
        cout << "Duck flies\n";
    }
    void Swim()
    {
        cout << "Duck swims\n";
    }
    void Drink()
    {
        cout << "Duck drinks\n";
    }
};

int main()
{
    Cat* cat = new Cat("Cat", 3, "white");
    cat->Eat();
    cat->Move();
    cat->Drink();

    Parrot* parrot = new Parrot("Ara", 2);
    parrot->Eat();
    parrot->Move();
    parrot->Drink();
    parrot->Fly();

    Penguin* penguin = new Penguin("Penguin", 10);
    penguin->Eat();
    penguin->Move();
    penguin->Drink();
    penguin->Swim();

    Elephant* elephant = new Elephant("Elephant", 1000);
    elephant->Eat();
    elephant->Move();
    elephant->Drink();

    Duck* duck = new Duck("Duck", 2);
    duck->Eat();
    duck->Move();
    duck->Drink();
    duck->Swim();
    duck->Fly();
}
