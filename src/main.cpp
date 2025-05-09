#include <iostream>
#include <string>
#include <fstream>
#include <memory>
#include <algorithm>
#include <cctype>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file)
    {
        std::cerr << "Failed to open file: " << argv[1] << std::endl;
        return 1;
    }

    constexpr int BUFFER_SIZE = 1024;
    std::unique_ptr<char[]> buffer(new char[BUFFER_SIZE]);

    while (file)
    {
        file.read(buffer.get(), BUFFER_SIZE);

        std::string result(buffer.get(), file.gcount());

        result.erase(std::remove_if(result.begin(), result.end(), ::isspace),
                     result.end());

        std::cout << result << std::endl;
    }

    return 0;
}
