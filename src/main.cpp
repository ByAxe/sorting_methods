#include <iostream>
#include "test/Juxtaposer.h"

using namespace std;

int main() {
    auto *juxtaposer = new Juxtaposer();
    juxtaposer->testAllMethods(true);

    return 0;
}