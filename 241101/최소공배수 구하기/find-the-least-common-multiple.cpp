#include <iostream>
#include <cstdlib> // abs 함수를 사용하기 위한 헤더

// 최소 공배수를 계산하고 출력하는 함수
void calculateAndPrintLcm(int n, int m) {
    // 최대 공약수(GCD) 계산
    int a = n, b = m;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;

    // 최소 공배수(LCM) 계산
    int lcm = (n == 0 || m == 0) ? 0 : abs(n * m) / gcd;

    // 결과 출력
    std::cout << lcm << std::endl;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    calculateAndPrintLcm(n, m); // LCM 계산 및 출력
    return 0;
}