#include <string>
#include <random>

std::string generate_captcha(int length = 5)
{
    static const char chars[] = "ABCDEFGHJKLMNPQRSTUVWXYZ23456789";
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution^<^> dist(0, sizeof(chars) - 2);

    std::string r;
    for (int i = 0; i < length; i++)
        r += chars[dist(rng)];

    return r;
}
