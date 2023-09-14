#include <EmbeddedOs/foo.hpp>
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

int sum(const int a, const int b)
{
    return a + b;
}

int sumFromJson(const std::string strPathToJson)
{
    std::ifstream f(strPathToJson);
    json data = json::parse(f);
    int a = data["a"];
    int b = data["b"];
    return a + b;
}