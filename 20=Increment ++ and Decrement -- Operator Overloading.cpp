/Author= Aryan Rathee
//Increment ++ and Decrement -- Operator Overloading
#include <iostream>
using namespace std;

class Check
{
    private:
       int i;
    public:
       Check(): i(0) {  }
       void operator ++() 
          { ++i; }
       void Display() 
          { cout << "i=" << i << endl; }
};

int main()
{
    Check obj;

    // Displays the value of data member i for object obj
    obj.Display();

    // Invokes operator function void operator ++( )
    ++obj; 
  
    // Displays the value of data member i for object obj
    obj.Display();

 #include <iostream>
using namespace std;

class Check
{
  private:
    int i;
  public:
    Check(): i(3) {  }
    Check operator -- ()
    {
        Check temp;
        temp.i = --i;
        return temp;
    }

    // Notice int inside barcket which indicates postfix decrement.
    Check operator -- (int)
    {
        Check temp;
        temp.i = i--;
        return temp;
    }

    void Display()
    { cout << "i = "<< i <<endl; }
};

int main()
{
    Check obj, obj1;    
    obj.Display(); 
    obj1.Display();

    // Operator function is called, only then value of obj is assigned to obj1
    obj1 = --obj;
    obj.Display();
    obj1.Display();

    // Assigns value of obj to obj1, only then operator function is called.
    obj1 = obj--;
    obj.Display();
    obj1.Display();

    return 0;
}
