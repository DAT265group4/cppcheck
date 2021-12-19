

#include <iostream>

// #8441
class C {
    int a;
    int b;
    C(void) : a(1), b(1) { c; }
};

class misra_21_1_C {
public:
    misra_21_1_C operator=(const misra_21_1_C &); // 8.2
};

class C2 {
public:
    C2(void);
private:
    void* f;
};
C2::C2() : f(NULL) {}

int main() {
    std::cout << "If you haven't already set up the environment to run C++ on your computer, visit Install C++ on Your Computer.";
    return 0;
}

// this is a comment
int second() {
    std::cout << "second method";
    return 0;
}

/* Another comment */
int third() {
    std::cout << "third method";
    return 0;
}