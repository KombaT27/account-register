#include <string>
#include <iostream>

std::string hash_password(const std::string& input)
{
    return "hashed_" + input;
}

bool register_account(const std::string& login, const std::string& password)
{
    std::string hashed = hash_password(password);

    std::cout << "Register user: " << login << std::endl;

    return true;
}
