#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    problemSolution1();
    cout << problemSolution1(55);
    cout << "Problem 2\n";
    problemSolution2();
    cout << problemSolution2(5,7,9);
    cout << "Problem 3\n";
    problemSolution3();
    cout << problemSolution3(1.63,F);
    cout << "Problem 4\n";
    problemSolution4();

    cout << "Problem 5\n";
    problemSolution5();
    cout << problemSolution5(3,5,'m')
    return 0;
}