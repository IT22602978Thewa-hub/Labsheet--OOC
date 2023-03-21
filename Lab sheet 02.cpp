// Lab sheet 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//int searchKey(int numbers[],int x);
float area(int length, int width);
using namespace std;
struct Rectangle{
    int length,width;
};
int main()
/* {
    int i,x,key=-1;
    int numbers[10];

    for (i = 0; i < 10; ++i) {
        cout << "Enter the Number"<<i+1<<":";
        cin >> numbers[i];
    }
    cout << "Search Key :";
    cin >> x;

    key = searchKey(numbers,x);

    if (key == -1) {
        cout << "Value not found";
    }
    else {
        cout << "Search Number is " << key+1 << "th Number.\n";
    }


}
int searchKey(int numbers[],int x) {
    int r;
    for (r = 1; r <= 10; r++) {
        if (numbers[r]==x) {
            return r;
        }

    }
}*/
{
    struct Rectangle r1;
    struct Rectangle r2;
    float NetArea;
    cout << "Enter length of Rectsngle Yard : ";
    cin >> r1.length;
    cout << "Enter the width in rectangle Yard:";
    cin >> r1.width;
    cout << "Enter length of rectangle House :";
    cin >> r2.length;
    cout << "Enter the width of rectangle House :";
    cin >> r2.width;
    cout << "The Area of Yard is " << area(r1.length, r1.width) << endl;
    cout << "The Area of House is " << area(r2.length, r2.width) << endl;
    NetArea = area(r1.length, r1.width) - area(r2.length, r2.width);
    cout << "The Lawn area is " << NetArea;

}
float area(int length, int width) {
    int Area;
    Area = (length * width);
    return Area;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
