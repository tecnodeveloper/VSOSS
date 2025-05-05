// Modes of inheritence and access specifer
#include<iostream>
using namespace std;
class xyz
{
    public:
    int x;

    private:
    int y;

    protected:
    int z;
};
class child1: public xyz{
    //x will remain public
    // y will remain protected
    //z will be inaccessble
};
class child2: private xyz
{
    //x will be private
    //y will be private
    //z will be inaccessble
};
class child3: protected xyz
{
    //x will be protected
    //y will remain protected
    //z will be inaccessble
};
int main()
{
    
    return 0;
}