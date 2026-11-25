class Solution {
public:
    bool isThree(int n) {

        
       int root = sqrt(n);

// 1. Check perfect square
if(root * root != n) {
    return false;
}

// 2. Check whether root is at least 2
if(root < 2) {
    return false;
}

// 3. Check whether root is prime
for(int i = 2; i < root; i++) {
    if(root % i == 0) {
        return false;
    }
}

// 4. All checks passed
return true;
    }
    
};