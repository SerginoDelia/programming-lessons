/*
Enumerate Data Type and Typedef

Enum is used for defining user defined data types
we can use codes for commonly used strings

Ex: Departments
    we can use numbers instead of using strings
CS    --> 1
ECE   --> 2
IT    --> 3
Civil --> 4

Ex: Menu File
New   --> 0
Open  --> 1
Save  --> 2
Close --> 3

Defining them using const
const int CS = 1
const int ECE = 2
const int IT = 3
const int CIVIL = 4

Defining them using enum
enum dept {cs=1, ece, it, civil} // cs will be the starting point

int main() {
    dept d = cs
}

with enum we can define them all together

enum day {mon, tue, wed, thu, fri, sat, sun} --> defines all the constants together
    - they will automatically take the values 0 - 6 --> mon = 0, tues = 1, wed = 2, ...
    day --> is a user defined data type
    this is done outside of the main function

    int main() {
        day d;
        // d can be mon - sun
        d = mon
        d = tues
        d = sun

        if (d == mon)

    }

Typedef
    type definition
        useful for defining user defined data types

    typedef int marks;
    typedef int rollnum

    int main() {
    
        marks m1,m2, m3;
        rollnum r1,r2,r3;
    }
*/