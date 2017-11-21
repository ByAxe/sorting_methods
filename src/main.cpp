#include <iostream>
#include "test/Juxtaposer.h"

using namespace std;

int main() {
    auto *juxtaposer = new Juxtaposer();
    juxtaposer->juxtapose();
    char n;
    cin >> n;
    return 0;
}