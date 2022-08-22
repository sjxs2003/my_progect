#include <iostream>

class zuoyeer
{
    public:
    void shiyong()
    {
        int n;
        std::cout << "please input a number:" << std::endl;
        std::cin >> n;
        for (int i=0;i<n;i++)
        {
            std::cout << "Hello,Robomaster!" << std::endl;
        }
    }
};


int main()
{
    zuoyeer p;
    p.shiyong();
    return 0;
}