#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here

    if (macAddress == "FF:FF:FF:FF:FF:FF")
    {
        cout <<  "The MAC address type is broadcast." << endl;
    }
    else if (Octet % 2 == 0)
    {
        cout << "The MAC address type is unicast." << endl;
    }
    else if (Octet % 2 != 0)
    {
        cout << "The MAC address type is multicast." << endl;
    }

    // make use of control flow statements
    // return result;
}
