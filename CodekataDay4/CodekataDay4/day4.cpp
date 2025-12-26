#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    for (int i = 2; i <= n; i += 2) {
        answer += i;
    }

    return answer;
}
//---------------------------------------------------------- -
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    for (int i = 0; i < numbers.size(); i++)
        answer += numbers[i];

    return answer / numbers.size();
}
//---------------------------------------
#include <string>
#include <vector>

using namespace std;


string solution(int num) {
    string answer = "";
    int value = num;

    if (value % 2 == 0)
    {
        answer = "Even";
    }
    else if (value % 2 != 0)
    {
        answer = "Odd";
    }
    else
    {
        answer = "Even";
    }

    return answer;
}