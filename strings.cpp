#include <iostream>
#include <sstream>
#include<string.h>

using namespace std;

class Student
{
    int age, standard;
    string first_name, last_name;

    public:
     void set_age(int Age)
     {
         age = Age;
     }
     void set_standard(int Stan)
     {
         standard = Stan;
     }
     void set_first_name(string fn)
     {
        first_name = fn;
     }
     void set_last_name(string ln)
     {
         last_name = ln;
     }

     int get_age()
     {
         return age;
     }
     int get_standard()
     {
         return standard;
     }
     string get_first_name()
     {
         return first_name;
     }
     string get_last_name()
     {
         return last_name;
     }
     char* to_string()
     {
         char* strAge, strStandard;
         

         return 0;
         
     }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
   //st.to_string();

    
    return 0;
}