#include <iostream>
#include <string>

void handle_request(const std::string& req)
{
    if (req == "GET_CAPTCHA")
    {
        std::cout << "Captcha requested" << std::endl;
    }
    else if (req == "REGISTER")
    {
        std::cout << "Register request" << std::endl;
    }
}
