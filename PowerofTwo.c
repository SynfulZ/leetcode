

bool Twopower(int n) {
    if(n == 2) {
        return true;
    }
    else if(n < 2) {
        return false;
    }
    
    else {
        if((n/2)%2!=0)
        {
            return false;
        }

        return Twopower(n / 2);
    }
}

bool isPowerOfTwo(int n) {
    if(n < 1) {
        return false; // Negative numbers and 0 are not powers of two
    }
    if(n == 1) {
        return true; // 1 is a power of two
    }
    if(n % 2 != 0) {
        return false; // Odd numbers are not powers of two
    }
    return Twopower(n);
}
