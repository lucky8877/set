#include "set.h"

int main() {
    const int len = 10000;
    Set a(len);
    vector<uint64_t> Vec = a.GetPriority();
    for (int i =0; i < size(Vec); i++){
            cout<<Vec[i]<<"\n";

    }
}