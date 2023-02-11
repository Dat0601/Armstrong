//
// Created by KTC on 2/11/2023.
//
long long lt(int a, int b) {
    long long S = 1;
    for (int i = 1; i <= b; i++) S *= a;
    return S;
}