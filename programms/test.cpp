#include<iostream>
using namespace std;

class Test
{
    private:
            int x;
    public:
            Test();
};

Test::Test()
{
    x = 0;
}

int main ()
{
    Test A;
    Test B;
    return 0;
}