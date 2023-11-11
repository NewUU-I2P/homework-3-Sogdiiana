#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    string result;
    if (S == 'M') {
        switch (height)
        {
            case (height < 1.70):
                result= "short";
                break;
            case (height >= 1.70 && height < 1.85):
                result = "normal " ;
                break;
            case (height >= 1.85):
                result = "tall ";
                break;
        }
    }
    else if (S == 'F')
    {
        switch (height)
        {
            case (height < 1.60):
                result = "short" ;
                break;
            case (height >= 1.60 && height < 1.75):
                result = "normal " ;
                break;
            case (height >= 1.75):
                result = "tall " ;
                break;
        }
    }
    return result;
    // use return to return your result
    // make use of control flow statements
}