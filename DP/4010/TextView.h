#include <string>
#include <iostream>

class TextView
{
    std::string data;
    std::string font;
    int         width;
public:
    TextView( std::string s, std::string fo ="ëëęł ë", int w=24 )
                : data(s), font(fo), width(w) {}

    void Show() { std::cout << data << std::endl;}
};

// TextView tv("hello");
// tv.Show();
