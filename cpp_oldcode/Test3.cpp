#include "iostream"
using namespace std;
//Creating class with name of student there are two type of access modifiers which are public private
class student
{
public:                                     //Default value of class is private and structure is public: so if you forget to write public than default value is private but in struct the value public
    int x =23;
    float y = 3.34;
    inline void info()
    {
        cout<<"Student is nice and beautifull"<<endl;
    }
    inline void bootcamp()       //inline function is used to boost your program when you take to write arithemetic operations in the function you can simply speed up program by writing inline
    {
        cout<<"I have to boost my 3rd semester with coding practice and web development bootcamp starting from monday next week ";
    }
};         //In class curly braces you have to write ; semicolon at the end of class.
int main()
{
    student so;
    so.bootcamp();
    so.info();
}