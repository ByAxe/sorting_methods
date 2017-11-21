#include <iostream>
#include "test/Juxtaposer.h"

using namespace std;

int main() {
    auto *juxtaposer = new Juxtaposer();
    juxtaposer->juxtapose();
    char r;
    cin >> r;
    return 0;
}