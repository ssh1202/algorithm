// 몫구하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    answer = num1 / num2;
    return answer;
}
// 나이출력
#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int answer = 0;
    int year = 2022;
    int birth = year + 1 - age;
    answer = birth;
    return answer;
}
// 숫자 비교하기
int solution(int num1, int num2) {
    int answer = 0;
    if (num1 == num2)
    {
        return 1;
    }
    answer = -1;

    return answer;
}
// 두수의 합
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = num1 + num2;
    return answer;
}
//두 수의 나눗셈
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    double value = 0;
    value = double(num1) / double(num2) * 1000;

    return value;
}// 각도기
#include <string>
#include <vector>

using namespace std;

int solution(int angle) {

    if (angle < 90) return 1;
    else if (angle == 90) return 2;
    else if (angle == 180) return 4;
    else if (90 < angle < 180) return 3;

    return 0;
}