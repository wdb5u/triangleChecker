#include <iostream>

using namespace std;

int main()
{
    int sideA, sideB, sideC;
    bool isATriangle;

    //Get Input
    cout<<"Enter 3 integers, one at a time, which are sides of a triangle"<<endl;
    cin>>sideA;
    cin>>sideB;
    cin>>sideC;

    cout<<"Side A is: "<<sideA<<endl;
    cout<<"Side B is: "<<sideB<<endl;
    cout<<"Side C is: "<<sideC<<endl;

    //Is it a triangle?
    if( (sideA < (sideB + sideC)) && (sideB < (sideA + sideC)) && (sideC < (sideA + sideB)) ){
        isATriangle = true;
    }
    else{
        isATriangle = false;
    }

    //Determine Triangle Type
    if (isATriangle){
        if( (sideA == sideB) && (sideB == sideC) ){
            cout<<"Equilateral"<<endl;
        }
        else if( (sideA != sideB) && (sideA != sideC) && (sideB != sideC) ){
            cout<<"Scalene"<<endl;
        }
        else{
            cout<<"Isosceles"<<endl;
        }
    }
    else{
        cout<<"Not a Triangle"<<endl;
    }

    return 0;
}
