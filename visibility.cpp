// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Visible {
    
    public:
        Visible();
        void pubA();
    protected:
        void protB();
    private:
        void privC();
        int privVar = 0;
    
};

Visible::Visible() {
    cout << "Inside Visible const";    
}

void
Visible::pubA() {
    cout << "in a public function" << "\n";
    cout << "privVar = " << privVar << "\n";    =====> We can call private function/member from any member function of that class.
    cout << "calling privC()";
    privC();
}

void
Visible::protB() {
    cout << "in a protected function" << "\n";
}

void
Visible::privC() {
    cout << "in a private function" << "\n";
}


int main() {
    // Write C++ code here
   // std::cout << "Hello world!";
   
   Visible v;
   v.pubA();
   
   //v.protB();  ==> ERROR: but you can not call protected/private fuction from outside the class.

    return 0;
}

