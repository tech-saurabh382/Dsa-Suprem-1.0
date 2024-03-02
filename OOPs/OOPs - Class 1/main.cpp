#include <iostream>
#include <string.h>
using namespace std;

class Animal
{
    // state and properties
private:
    int weight;

public:
    int age;
    char type[20];

    // Default Constructor
    Animal()
    {
        this->weight = 0;
        this->age = 0;
        // this->type = "";
        // cout << "Constructor Called" << endl;
    }

    // Parameterised Constructor
    // Animal(int age)
    // {
    //     this->age = age;
    //     cout << "Paramaterised Constructor Called" << endl;
    // }

    // Animal(int age, int weight)
    // {
    //     this->age = age;
    //     this->weight = weight;
    //     cout << "Paramaterised Constructor 2 Called" << endl;
    // }

    // Animal(int age, int weight, char* type)
    // {
    //     this->age = age;
    //     this->weight = weight;
    //     this->type = type;
    //     cout << "Paramaterised Constructor 3 Called" << endl;
    // }

    // Copy Constructor
    // Animal(Animal &obj)
    // {
    //     this->age = obj.age;
    //     this->weight = obj.weight;
    //     this->type = obj.type;
    //     cout << "I am inside copy constructor" << endl;
    // }

    // behaviour
    void eat()
    {
        cout << "Eating" << endl;
    }

    void sleep()
    {
        cout << "Sleeping" << endl;
    }

    int getWeight()
    {
        return weight;
    }

    void setWeight(int weight)
    {
        this->weight = weight; // this is the pointer to the current object
    }

    void print()
    {
        cout << this->age << " " << this->weight << " " << this->type << " " << endl;
    }

    ~Animal()
    {
        cout << "I am inside destructor" << endl;
    }
};

int main()
{
    // Object Creation

    // Static
    // Animal ramesh;
    // ramesh.age = 12;
    // ramesh.type = "Lion";
    // cout << "Age of ramesh is " << ramesh.age << endl;
    // cout << "Type of ramesh is " << ramesh.type << endl;

    // ramesh.eat();
    // ramesh.sleep();

    // // to private member
    // ramesh.setWeight(101);
    // cout << "weight " << ramesh.getWeight() << endl;

    // Dynamic Memory

    // Animal *suresh = new Animal();
    // (*suresh).age = 15;
    // (*suresh).type = "billi";

    // // alternate - dynamic
    // suresh->age = 17;
    // suresh->type = "baby";

    // suresh->eat();
    // suresh->sleep();

    // Animal a(10);
    // Animal *b = new Animal(100, 10, "Saurabh");

    // // object copy
    // Animal c = a;

    // Animal animal1(c);

    // Animal a;
    // a.age = 20;
    // a.setWeight(101);
    // // strcpy(a.type, "babbar");

    // Animal b = a;
    // a.print();
    // b.print();

    // a.type[0] = 'G';
    // cout << "a -> ";
    // a.print();

    // cout << "b -> ";
    // b.print();

    cout<<"A object Creation" << endl;
    Animal a;
    a.age = 5;

    cout<<"B object Creation" << endl;
    Animal *b = new Animal();
    b->age = 12;

    // manually
    delete b;

    return 0;
}