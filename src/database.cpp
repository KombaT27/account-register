#include <string>
#include <iostream>

std::string hash_password(const std::string& input)
{
    std::string result = "hash_";
    for (char c : input) result += (c + 1);
    return result;
}

bool register_account(const std::string& login, const std::string& password)
{
    std::string hashed = hash_password(password);

    std::cout << "Registering user: " << login << std::endl;
    std::cout << "Password stored as hash" << std::endl;

    return true;
}
