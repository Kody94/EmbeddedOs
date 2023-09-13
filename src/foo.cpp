#include <EmbeddedOs/foo.hpp>
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

int sum(const int a, const int b)
{
    return a + b;
}
int sumFromJson()
{
    std::ifstream f("example.json");
    json data = json::parse(f);
    int a = data["a"];
    int b = data["b"];
    return a + b;
}