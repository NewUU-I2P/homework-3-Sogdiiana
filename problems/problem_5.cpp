float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
    switch (operation)
    {
        case 'm':
        case 'M':
            result = x*y;
            break;
        case 'a':
        case 'A':
            result = x+y;
            break;
        case 'd':
        case 'D':
            result = x/y;
            break;
        case 's':
        case 'S':
            result = x-y;
            break;
        default:
            result = 0;
            break;
    }
   return result;
}
