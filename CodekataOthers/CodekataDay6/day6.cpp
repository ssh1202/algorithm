//나머지가 1이 되는 수 찾기
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 1)
        {
            return i;
        }
    }

}
//x만큼 간격이 있는 n개의 숫자
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;

    int num = x;

    for (int i = 0; i < n; i++)
    {
        num = x + i * x;
        answer.push_back(num);
    }

    return answer;
}
//자연수 뒤집어 배열로 만들기
#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while (n > 0) {
        answer.push_back(n % 10);
        n /= 10;
    }
    return answer;
}//자연수를 정수로 변환
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = stoi(s);
    return answer;
}
//정수 제곱근 판별
#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) {
    long long answer = sqrt(n); 

    return powl(answer, 2) == n ? powl(answer + 1, 2) : -1;
}
//정수 내림차순으로 배치하기
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> vec;
    while (n > 0) {
        vec.push_back(n % 10);
        n /= 10;
    }
    sort(vec.begin(), vec.end(), greater<int>());
    for (int i = 0; i < vec.size(); i++) {
        answer = answer * 10 + vec[i];
    }
    return answer;
}
//
