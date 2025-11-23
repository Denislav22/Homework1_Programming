#include <iostream>

bool isPrime(int number) {
    if (number < 2) {
        return false; 
    }

    bool prime = true;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}

bool digitsDiff(int number) {
   
    int n = number;
    while (n > 0) {
        int lastDigit = n % 10;
        int temp = n / 10;
        while (temp > 0) {
            if (temp % 10 == lastDigit) {
                return false;
            }
            temp /= 10;
        }
        n /= 10;
    }
    return true;
}


bool isRemarkable(int number) {
    if (!isPrime(number)) {
        return false;
    }
    if (!digitsDiff(number)) {
        return false;
    }
    return true;
}

int main() {
    int num;
    std::cin >> num;

    if (isRemarkable(num)) {
        std::cout << num << std::endl;
        return 0;
    }

    int smallerNum = num - 1;
    int greaterNum = num + 1;

    while (true) {
        if (smallerNum >= 2 && isRemarkable(smallerNum)) {
               
                std::cout << smallerNum << std::endl;
                return 0;
           
        }
        if (isRemarkable(greaterNum)) {
            std::cout << greaterNum << std::endl;
            return 0;
        }

        smallerNum--;
        greaterNum++;
    }

}
