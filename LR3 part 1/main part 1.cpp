//
//  main.cpp
//  LR3
//
//  Created by Роберт Артур Меликян on 10/10/2019.
//  Copyright © 2019 Роберт Артур Меликян. All rights reserved.
//
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cout << "Введите количество элементов" << endl;
    cin >> n;
    vector<int> numbers;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    double geom = 1;
    for(int i = 0; i < numbers.size() ; i++){
        geom *= numbers.at(i);
        cout << "Элемент-" << i << " = " << numbers.at(i) << endl;
    }
    geom = pow(geom, 1./n);
    cout << geom << endl;
    return 0;
}
