#include <iostream>
#include <string>
#include <sstream>
#include "../include/captcha.h"
#include "../include/database.h"

void handle_request(const std::string& req)
{
    std::istringstream ss(req);
    std::string cmd;
    getline(ss, cmd, '|');

    if (cmd == "GET_CAPTCHA")
    {
        std::string captcha = generate_captcha();
        std::cout << "CAPTCHA: " << captcha << std::endl;
    }
    else if (cmd == "REGISTER")
    {
        std::string user, pass;
        getline(ss, user, '|');
        getline(ss, pass, '|');

        if (user.empty() || pass.empty())
        {
            std::cout << "ERR_DATA" << std::endl;
            return;
        }

        bool ok = register_account(user, pass);

        std::cout << (ok ? "OK" : "ERR") << std::endl;
    }
}