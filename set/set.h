#include <vector>
#include <iostream>

using namespace std;

class Set {
    private:
        vector<uint64_t> _arr; 
        uint64_t _len;
    public:
        Set(uint64_t len);
        vector<uint64_t> GetPriority() const; 
};
