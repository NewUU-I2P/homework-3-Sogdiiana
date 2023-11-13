#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    string result;
    if (macAddress == "FF:FF:FF:FF:FF:FF")
    {
        result = "Broadcast";
    }
    else if (Octet[1] % 2 == 0)
    {
        result = "Unicast";
    }
    else if (Octet[1] % 2 != 0)
    {
        result = "Multicast";
    }

    // make use of control flow statements
    // return result;

}
