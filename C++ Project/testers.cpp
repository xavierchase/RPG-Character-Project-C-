#include <iostream>
#include <random>
using namespace std;
//Creating the physicality of a character, class, allignment, inventory, stats to be added on later.
class Character{
    private:
    
    string race = "human";
    int height;
    int weight;
    int age;
    mt19937 mt{random_device{}()};
    uniform_int_distribution<> h{160, 200};
    uniform_int_distribution<> w{140, 200};
    uniform_int_distribution<> a{18, 80}; 
    
    public:
    Character(){
        height = h(mt);
        weight = w(mt);
        age = a(mt);
    }

    int returnHeight(){
        return height;
    }
    int returnWeight(){
        return weight;
    }
    int returnAge(){
        return age;
    }
};


int main(){
    Character test;
    cout<<test.returnHeight()<<"\t";
    cout<<test.returnWeight()<<"\t";
    cout<<test.returnAge()<<"\t";  
    
}


