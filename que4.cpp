
// WAP to add and swap private data of two different classes. Use separate function for add and swap.

#include <conio.h>
#include <iostream>

using namespace std;

class two;
class one
{
    int x;

public:
    void set_value(int i)
    {
        x = i;
    }

    void display()
    {
        cout << "x= " << x;
    };
    friend void swap(one, two);
     friend void add(one ,two);
};

class two
{
    int y;

public:
    void set_value(int j)
    {
        y = j;
    }
    void display()
    {
        cout << "y= " << y;
    };

    friend void swap(one, two);
    friend void add(one ,two);
};

void swap(one a, two b)
{
    int temp;
    temp = a.x;
    a.x = b.y;
    b.y = temp;
    cout << "x= " << a.x << "y= " << b.y;
}

void add(one a,two b){
    int c = a.x+b.y;
    cout<<"\nThe sum is "<<c;
}

int main()
{
    one on;
    two tw;
    cout << "\nBefore swapping\n";
    on.set_value(10);
    tw.set_value(20);
    on.display();
    tw.display();
    add(on,tw);
    cout << "\nAfter swapping\n";
    swap(on, tw);
    getch();
    return 0;
}
