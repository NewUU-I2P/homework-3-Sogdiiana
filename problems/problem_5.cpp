float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
    switch (operation)
    {
        case '*':
            result = x*y;
            break;
        case '+':
            result = x+y;
            break;
        case '/':
            result = x/y;
            break;
        case '-':
            result = x-y;
            break;
        default:
            result = 0;
            break;
    }
   return result;
}
