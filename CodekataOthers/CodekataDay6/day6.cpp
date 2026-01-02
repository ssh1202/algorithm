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
}