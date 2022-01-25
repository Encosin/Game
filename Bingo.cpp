// 빙고게임
#include <iostream>
#include <time.h>
using namespace std;

// iN = iNumber, iT = i
int main()
{
    srand((unsigned int) time(0));
    int num[25] = {};

    // 1~25 까지 숫자를 넣어준다.
    for (int i =0; i < 25; ++i) 
    {
        iN[i] = i+1;

    }

    // 숫자를 섞어준다.
    int iT, idx1. idx2;
    for (int i = 0; i < 100; ++i)
    {
        idx1 = rand() % 25;
        idx2 = rand() % 25;

        iT = iN[idx1];
        num[idx1] = num[idx2];
        num[idx2] = iT;
    }

    while(true)
    {
        system('cls');

        // 숫자를 5 X 5 로 출력한다.
        for (int i=0; i< 5; ++i)
        {
            for (int j = 0; j <5; ++j)
            {
                if (num[i*5 + j] == INT_MAX)
                    cout << "\t";
                else 
                    cout << num[i * 5 + j] << "\t";    
            }
            cout << endl;
        }
        cout << "숫자를 입력하세요.(0 : 종료) : ";
        int input;  
        cin >> input;

        if (input == 0)
            break;

        else if (input < 1 || input > 25)
            continue;

        // 중복입력을 체크하기 위한 변수이다. 기본적으로 중복되었다라고
        // 하기위해 true로 잡아주었다.
        bool bAcc = true;

        // 모든 숫자를 차례대로 검사해서 입력한 숫자와 
        // 같은 숫자가 있는지를 찾아낸다.
        for (int i = 0; i < 25; ++i)
        {
            // 같은 숫자가 있을 경우
            if(input == num[i])
            {
                // 숫자를 찾았을 경우 중복된 숫자가 아니므로
                // bAcc 변수를 false로 만들어준다.
                bAcc = false;
                // 숫자를 *로 변경하기 위해 특수한 값인 INT_MAX로 해준다.
                num = INT_MAX;

                // 더이상 다른 숫자를 찾아볼 필요가 없으므로
                // for 문을 빠져나간다.
                break;
            }
        }

        // vAcc 변수가 true일 경우 중복된 숫자를 입력해서 숫자를 *로
        // 바꾸지 못했으므로 다시 입력받게 continue 해준다.

    }

    return 0;
}