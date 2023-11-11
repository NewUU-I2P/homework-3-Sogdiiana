float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    if(i>j && i>k)
    {
        cout << i;
    }
    else if(j>i && j>k)
    {
        cout << j;
    }
   else if(k>j && k>i)
    {
        cout << k;
    }
    else
    {
        cout << "numbers are equal";
    }
    return result;
}