//
//  lab2-2.cpp
//  data-structure-lab
//
//  Created by 홍승의 on 2018. 3. 21..
//  Copyright © 2018년 홍승의. All rights reserved.
//

#include <iostream>
#include <string>

#define PI 3.14
using namespace std;

struct Shape{
    string name;
    float getSize();
    void show();
};
struct Triangle:Shape{
    float base;
    float height;
    Triangle(){
        name = "triangle";
        cin >> base >> height;
    }
    float getSize(){
        return base*height/2;
    }
    void show(){
        cout << name << " " << base << " " << height << " " << getSize() << endl;
    }
};
struct Rectangle:Shape{
    float side1;
    float side2;
    Rectangle(){
        name = "rectangle";
        cin >> side1 >> side2;
    }
    float getSize(){
        return side1 * side2;
    }
    void show(){
        cout << name << " " << side1 << " " << side2 << " " << getSize() << endl;
    }
};
struct Circle:Shape{
    float radius;
    Circle(){
        name = "circle";
        cin >> radius;
    }
    float getSize(){
        return radius * radius * PI;
    }
    void show(){
        cout << name << " " << radius << " " << getSize() << endl;
    }
};

int main(){
    Shape *arr[100];
    
    freopen("/Users/hongseung-ui/data-structure-example/data-structure-lab/data-structure-lab/Lab2.txt","r",stdin);
    int i = 0;
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    while(true){
        string name;

        cin >> name;
        if(name == "triangle"){
            arr[i] = new Triangle();
            ((Triangle *)arr[i])->show();
        }
        else if(name == "circle"){
            arr[i] = new Circle();
            ((Circle *)arr[i])->show();
        }
        else if(name == "rectangle"){
            arr[i] = new Rectangle();
            ((Rectangle *)arr[i])->show();
        }
        else
            break;
        ++i;
    }
    return 0;
}
