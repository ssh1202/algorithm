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
//하샤드 수
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int src = x;
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }

    return src % sum == 0;

}
//두 정수 사이의 합
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    for (int i = min(a, b); i <= max(a, b); i++)
        answer += i;
    return answer;
}


//콜라츠 추측 (01.02)
int solution(int num) {
    long long n = num; 
    int count = 0;

    if (n == 1)
        return 0;

    while (n != 1 && count < 500) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }
        count++;
    }

    if (n == 1)
        return count;
    else
        return -1;
}
//서울에서 김서방 찾기
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    for (int i = 0; i < seoul.size(); i++) {
        if (seoul[i] == "Kim")
            answer = "김서방은 " + to_string(i) + "에 있다";
    }
    return answer;
}
//나누어 떨어지는 숫자
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % divisor == 0) answer.push_back(arr[i]);
    }
    if (!answer.size()) answer.push_back(-1);
    sort(answer.begin(), answer.end());
    return answer;
}
//음양 더하기
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    for (int i = 0; i < signs.size(); i++) {
        if (!signs[i]) absolutes[i] *= -1;
        answer += absolutes[i];
    }
    return answer;
}
//핸드폰 번호 가리기
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = phone_number;
    for (int i = 0; i < answer.size() - 4; i++) {
        answer.replace(i, 1, "*");
    }
    return answer;
}

//없는 숫자 더하기

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {

    int answer = 45;

    for (int i = 0; i < numbers.size(); i++)
        answer -= numbers[i];

    return answer;
}
//제일 작은 수 제거하기

#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1) {
        return vector<int>{-1};
    }

    int minValue = *min_element(arr.begin(), arr.end());

    vector<int> answer;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != minValue) {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}
//수박
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) {
            // 짝수 ("수")
            answer += "수";
        }
        else {
            // 홀수 ("박")
            answer += "박";
        }
    }

    return answer;
}
