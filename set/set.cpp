#include "set.h"


Set::Set(uint64_t len) {
    _len = len;
    for (int i = 0; i < _len; i++) {
        _arr.push_back(i); 
    }
}

vector<uint64_t>  Set::GetPriority() const {
    
    vector<uint64_t>finalVec;
    vector<bool>boolVec;

    for (int i = 0; i < _len; i++) {
        boolVec.push_back(true);
    }

    boolVec[0] = false;
    boolVec[1] = false;

    for (int i = 2; i < _len; i++) { 
        if (boolVec[i] == true) {
            int j = i;
            while (j <= _len) {
                j += i;
                boolVec[j] = false;
            }
        }
    }

    for (int i = 0; i < _len; i++) {
        if (boolVec[i] != false) {
            finalVec.push_back(i);
        }
    }

    return finalVec;
}
