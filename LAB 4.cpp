// Q.1.WAP TO CONVERT METER INTO A TYPE OF CLASS DISTANCE WITH DATA MEMBERS FEET AND INCHES.
//(METER TO FEET FORMULA = m*3.280833)

#include <iostream>

using namespace std;

class Distance
{
    int feets;
    float inches;

public:
    Distance()
    {
        feets = 0;
        inches = 0.0;
    }
    Distance(float meter)
    {
        float feet = meter * 3.280833;
        feet = int(feet);
        inches = 12 * (feet - feets);
    }
    void displaydist()
    {
        cout << "The converted Value is: " << feets << "\' ft and " << inches << '\"' << " inches.";
    }
};
int main()
{
    Distance d;
    float meter;
    cout << "Enter values in meters:";
    cin >> meter;
    d = meter; // conversion from basic to user defined
    d.displaydist();
}

// Q.2.WAP TO CONVERT OBJECT OF CLASS WITH DATA MEMBERS FEET AND INCHES INTO METER.

#include <iostream>
#include <math.h>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }
    Distance(int a, float b)
    {
        feet = a;
        inches = b;
    }
    operator float()
    {
        float feets;
        feets = inches / 12;
        feets += float(feet);
        return (feets / 3.280833);
    }
};

int main()
{
    int feet;
    float inches;
    cout << "Enter the data in feet and inches" << endl;
    cout << "feet : " << endl;
    cin >> feet;
    cout << "Inches : " << endl;
    cin >> inches;
    Distance d(feet, inches);
    float meter = d;
    cout << "The converted data in meter is : " << meter << " m" << endl;
    return 0;
}

/*Q.3.Create two classes :Distance1 with data members feet and inch,Distance2 with data members meter and centimeter.
WAP to convert object of Distance1 to Distance2.*/

#include <iostream>
using namespace std;

class Distance1
{
private:
    int feet, inches;

public:
    Distance1()
    {
        feet = 0;
        inches = 0;
    }
    Distance1(int x, int y)
    {
        feet = x;
        inches = y;
    }
    int getfeet()
    {
        return feet;
    }
    int getinches()
    {
        return inches;
    }
    void showdata()
    {
        cout << "Your data in feet and inches" << endl;
        cout << feet << " feet\t" << inches << " inches";
        cout << "" << endl;
    }
};

class Distance2
{
private:
    int meter, centimeter;

public:
    Distance2()
    {
        meter = 0;
        centimeter = 0;
    }
    Distance2(Distance1 a)
    {
        int x;
        x = (a.getfeet() + (a.getinches() / 12));
        meter = x / 3.280833;
        centimeter = meter * 100;
    }
    void show()
    {
        cout << "Converted data in meter and centimeter:" << endl;
        ;
        cout << meter << " meter " << centimeter << " centimeter" << endl;
    }
};

int main()
{
    Distance1 d1(15, 18);
    Distance2 d2;
    d2 = d1;
    d1.showdata();
    d2.show();
    return 0;
}

// Q.4.WAP to illustrate access of private,public and protected data members.

// ILLUSTRATING PRIVATE ACCESS

#include <iostream>
using namespace std;

class Member
{
private:
    int a;

public:
    int b;

protected:
    int c;
    Member()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

class Derived : private Member
{
public:
    void display()
    {
        cout << "a can't be accessed" << endl;
        cout << b << endl;
        cout << c << endl;
    }
};

int main()
{
    Derived d;
    d.display();
    return 0;
}

// ILLUSTRATING PROTECTED ACCESS

#include <iostream>
using namespace std;

class Member
{
private:
    int a;

public:
    int b;

protected:
    int c;
    Member()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

class Derived : protected Member
{
public:
    void display()
    {
        cout << "a can't be accessed" << endl;
        cout << b << endl;
        cout << c << endl;
    }
};

int main()
{
    Derived d;
    d.display();
    return 0;
}

// ILLUSTRATING PUBLIC ACCESS

#include <iostream>
using namespace std;

class Member
{
private:
    int a;

public:
    int b;

protected:
    int c;
    Member()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

class Derived : public Member
{
public:
    void display()
    {
        cout << "a can't be accessed" << endl;
        cout << b << endl;
        cout << c << endl;
    }
};

int main()
{
    Derived d;
    d.display();
    return 0;
}

// Q.5.

#include <iostream>
#include <string.h>
using namespace std;

class parent1
{
private:
    char name[20];
    char address[30];

public:
    parent1() {}
    void getdata()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your address: " << endl;
        cin >> address;
    }
    void putdata()
    {
        cout << "Your name is:" << name << endl;
        cout << "Your address is:" << address << endl;
    }
};

class child1 : public parent1
{
private:
    int roll_no;
    long long int phone_no;

public:
    child1() {}
    void get()
    {
        cout << "Enter your roll.no: " << endl;
        cin >> roll_no;
        cout << "Enter your phone.no: " << endl;
        cin >> phone_no;
    }
    void put()
    {
        cout << "Your roll_no is:" << roll_no << endl;
        cout << "Your phone_no is:" << phone_no << endl;
    }
};

class child2 : public child1
{
private:
    int age;
    float price;

public:
    void takedata()
    {
        cout << "Enter your age: " << endl;
        cin >> age;
        cout << "Enter the price: " << endl;
        cin >> price;
    }
    void display()
    {
        cout << "Your age is:" << age << endl;
        cout << "The price is:" << price << endl;
    }
};

int main()
{
    child2 c2;
    c2.getdata();
    c2.get();
    c2.takedata();
    c2.putdata();
    c2.put();
    c2.display();
    return 0;
}

/*Q.6.Create a class Cricketer with member variables to represent name,age and number of matches played.From this class derive two classes bowler and batsman .
Bowler class has number of wickets as member variable and batsman class has number of runs and centuries as member variables . Use appropriate member functions
in all classes to read and display respective data.*/

#include <iostream>
using namespace std;

class Cricketer
{
private:
    char name[20];
    int age, number;

public:
    void readdata();
    void displaydata();
};

void Cricketer::readdata()
{
    cout << "Enter cricketer's information below:" << endl;
    cout << "Name:" << endl;
    cin >> name;
    cout << "Age" << endl;
    cin >> age;
    cout << "No.of matches played:" << endl;
    cin >> number;
}

void Cricketer::displaydata()
{
    cout << "--------------------" << endl;
    cout << "Cricketer's information" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "No.of matches played: " << number << endl;
}

class Bowler : public Cricketer
{
private:
    int wickets_no;

public:
    void read();
    void display();
};

void Bowler::read()
{
    Cricketer::readdata();
    cout << "No.of wickets :" << endl;
    cin >> wickets_no;
}

void Bowler::display()
{
    Cricketer::displaydata();
    cout << "No. of wickets: " << wickets_no << endl;
}

class Batsman : public Cricketer
{
private:
    int runs, centuries;

public:
    void getdata();
    void showdata();
};

void Batsman::getdata()
{
    Cricketer::readdata();
    cout << "No.of runs :" << endl;
    cin >> runs;
    cout << "No.of centuries :" << endl;
    cin >> centuries;
}

void Batsman::showdata()
{
    Cricketer::displaydata();
    cout << "No. of runs: " << runs << endl;
    cout << "No. of centuries: " << centuries << endl;
}

int main()
{
    Bowler b1;
    Batsman b2;
    b1.read();
    b2.getdata();
    b1.display();
    b2.showdata();
    return 0;
}
