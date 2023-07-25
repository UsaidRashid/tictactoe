#include <bits/stdc++.h>
#include <random>
#include <chrono>
#include <unistd.h>
#include <ctime>
using namespace std;
#define int long long

int generateRandomNumber()
{
    static mt19937 gen(static_cast<unsigned int>(time(0)) * getpid());
    uniform_int_distribution<int> distribution(1, 9);
    return distribution(gen);
}

void TwoPlayersMode()
{
    vector<vector<string>> grid(4, vector<string>(4, " "));
    for (int i = 1; i <= 9; i++)
    {
        if (i % 2 == 1)
        {
        label1:
            cout << "PLAYER 1's TURN" << endl;
            cout << "ENTER THE NUMBER WHERE YOU WANT TO PLACE YOUR X ON ACCORDING TO THE TABLE GIVEN BELOW" << endl;
            int x = 1;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << x++ << " ";
                }
                cout << endl;
            }
            int k;
            int flag = 0;
            cin >> k;
            switch (k)
            {
            case 1:
            {
                if (grid[0][0] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label1;
                }
                else
                {
                    grid[0][0] = "X";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][1] == "X" && grid[0][2] == "X") || (grid[1][1] == "X" && grid[2][2] == "X") || (grid[1][0] == "X" && grid[2][0] == "X"))
                    {
                        cout << "PLAYER 1 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                if (grid[0][1] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label1;
                }
                else
                {
                    grid[0][1] = "X";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][0] == "X" && grid[0][2] == "X") || (grid[1][1] == "X" && grid[2][1] == "X"))
                    {
                        cout << "PLAYER 1 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 3:
            {
                if (grid[0][2] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label1;
                }
                else
                {
                    grid[0][2] = "X";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][1] == "X" && grid[0][0] == "X") || (grid[1][2] == "X" && grid[2][2] == "X") || (grid[1][1] == "X" && grid[2][0] == "X"))
                    {
                        cout << "PLAYER 1 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 4:
            {
                if (grid[1][0] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label1;
                }
                else
                {
                    grid[1][0] = "X";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][0] == "X" && grid[2][0] == "X") || (grid[1][1] == "X" && grid[2][1] == "X"))
                    {
                        cout << "PLAYER 1 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 5:
            {
                if (grid[1][1] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label1;
                }
                else
                {
                    grid[1][1] = "X";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[1][0] == "X" && grid[1][2] == "X") || (grid[0][1] == "X" && grid[2][1] == "X") || (grid[0][0] == "X" && grid[2][2] == "X") || (grid[0][2] == "X" && grid[2][0] == "X"))
                    {
                        cout << "PLAYER 1 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 6:
            {
                if (grid[1][2] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label1;
                }
                else
                {
                    grid[1][2] = "X";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[1][0] == "X" && grid[1][1] == "X") || (grid[0][2] == "X" && grid[2][2] == "X"))
                    {
                        cout << "PLAYER 1 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 7:
            {
                if (grid[2][0] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label1;
                }
                else
                {
                    grid[2][0] = "X";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][0] == "X" && grid[1][0] == "X") || (grid[2][1] == "X" && grid[2][2] == "X") || (grid[1][1] == "X" && grid[0][2] == "X"))
                    {
                        cout << "PLAYER 1 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 8:
            {
                if (grid[2][1] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label1;
                }
                else
                {
                    grid[2][1] = "X";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][1] == "X" && grid[1][1] == "X") || (grid[2][0] == "X" && grid[2][2] == "X"))
                    {
                        cout << "PLAYER 1 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 9:
            {
                if (grid[2][2] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label1;
                }
                else
                {
                    grid[2][2] = "X";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][0] == "X" && grid[1][1] == "X") || (grid[2][0] == "X" && grid[2][1] == "X") || (grid[0][2] == "X" && grid[1][2] == "X"))
                    {
                        cout << "PLAYER 1 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            default:
            {
                cout << "ENTER VALID CHOICE" << endl;
                goto label1;
            }
                if (flag == 1)
                    return;
            }
            if (flag == 1)
                return;
        }
        else
        {
        label2:
            cout << "PLAYER 2's TURN" << endl;
            cout << "ENTER THE NUMBER WHERE YOU WANT TO PLACE YOUR X ON ACCORDING TO THE TABLE GIVEN BELOW" << endl;
            int x = 1;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << x++ << " ";
                }
                cout << endl;
            }
            int k;
            int flag = 0;
            cin >> k;
            switch (k)
            {
            case 1:
            {
                if (grid[0][0] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label2;
                }
                else
                {
                    grid[0][0] = "O";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][1] == "O" && grid[0][2] == "O") || (grid[1][1] == "O" && grid[2][2] == "O") || (grid[1][0] == "O" && grid[2][0] == "O"))
                    {
                        cout << "PLAYER 2 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                if (grid[0][1] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label2;
                }
                else
                {
                    grid[0][1] = "O";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][0] == "O" && grid[0][2] == "O") || (grid[1][1] == "O" && grid[2][1] == "O"))
                    {
                        cout << "PLAYER 2 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 3:
            {
                if (grid[0][2] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label2;
                }
                else
                {
                    grid[0][2] = "O";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][1] == "O" && grid[0][0] == "O") || (grid[1][2] == "O" && grid[2][2] == "O") || (grid[1][1] == "O" && grid[2][0] == "O"))
                    {
                        cout << "PLAYER 2 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 4:
            {
                if (grid[1][0] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label2;
                }
                else
                {
                    grid[1][0] = "O";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][0] == "O" && grid[2][0] == "O") || (grid[1][1] == "O" && grid[2][1] == "O"))
                    {
                        cout << "PLAYER 2 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 5:
            {
                if (grid[1][1] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label2;
                }
                else
                {
                    grid[1][1] = "O";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[1][0] == "O" && grid[1][2] == "O") || (grid[0][1] == "O" && grid[2][1] == "O") || (grid[0][0] == "O" && grid[2][2] == "O") || (grid[0][2] == "O" && grid[2][0] == "O"))
                    {
                        cout << "PLAYER 2 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 6:
            {
                if (grid[1][2] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label2;
                }
                else
                {
                    grid[1][2] = "O";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[1][0] == "O" && grid[1][1] == "O") || (grid[0][2] == "O" && grid[2][2] == "O"))
                    {
                        cout << "PLAYER 2 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 7:
            {
                if (grid[2][0] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label2;
                }
                else
                {
                    grid[2][0] = "O";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][0] == "O" && grid[1][0] == "O") || (grid[2][1] == "O" && grid[2][2] == "O") || (grid[1][1] == "O" && grid[0][2] == "O"))
                    {
                        cout << "PLAYER 2 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 8:
            {
                if (grid[2][1] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label2;
                }
                else
                {
                    grid[2][1] = "O";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][1] == "O" && grid[1][1] == "O") || (grid[2][0] == "O" && grid[2][2] == "O"))
                    {
                        cout << "PLAYER 2 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            case 9:
            {
                if (grid[2][2] != " ")
                {
                    cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                    goto label2;
                }
                else
                {
                    grid[2][2] = "O";
                    cout << "SUCCESSFULLY FILLED" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << grid[i][j];
                        }
                        cout << endl;
                    }
                    if ((grid[0][0] == "O" && grid[1][1] == "O") || (grid[2][0] == "O" && grid[2][1] == "O") || (grid[0][2] == "O" && grid[1][2] == "O"))
                    {
                        cout << "PLAYER 2 WON" << endl;
                        flag = 1;
                        break;
                    }
                }
                break;
            }
            default:
            {
                cout << "ENTER VALID CHOICE" << endl;
                goto label2;
            }
                if (flag == 1)
                    return;
            }
            if (flag == 1)
                return;
        }
    }
}

void vsBOT()
{
    vector<vector<string>> grid(4, vector<string>(4, " "));
    int flag = 0;
    int n = 5;
    while (n--)
    {
    label:
        if (flag == 1)
            return;
        cout << "ENTER THE NUMBER WHERE YOU WANT TO PLACE YOUR X ON ACCORDING TO THE TABLE GIVEN BELOW" << endl;
        int x = 1;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << x++ << " ";
            }
            cout << endl;
        }
        int k;
        cin >> k;
        switch (k)
        {
        case 1:
        {
            if (grid[0][0] != " ")
            {
                cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                goto label;
            }
            else
            {
                grid[0][0] = "X";
                cout << "SUCCESSFULLY FILLED" << endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << grid[i][j];
                    }
                    cout << endl;
                }
                if ((grid[0][1] == "X" && grid[0][2] == "X") || (grid[1][1] == "X" && grid[2][2] == "X") || (grid[1][0] == "X" && grid[2][0] == "X"))
                {
                    cout << "CONGRATULATIONS YOU WON" << endl;
                    flag = 1;
                    break;
                }
            }
            break;
        }
        case 2:
        {
            if (grid[0][1] != " ")
            {
                cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                goto label;
            }
            else
            {
                grid[0][1] = "X";
                cout << "SUCCESSFULLY FILLED" << endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << grid[i][j];
                    }
                    cout << endl;
                }
                if ((grid[0][0] == "X" && grid[0][2] == "X") || (grid[1][1] == "X" && grid[2][1] == "X"))
                {
                    cout << "CONGRATULATIONS YOU WON" << endl;
                    flag = 1;
                    break;
                }
            }
            break;
        }
        case 3:
        {
            if (grid[0][2] != " ")
            {
                cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                goto label;
            }
            else
            {
                grid[0][2] = "X";
                cout << "SUCCESSFULLY FILLED" << endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << grid[i][j];
                    }
                    cout << endl;
                }
                if ((grid[0][1] == "X" && grid[0][0] == "X") || (grid[1][2] == "X" && grid[2][2] == "X") || (grid[1][1] == "X" && grid[2][0] == "X"))
                {
                    cout << "CONGRATULATIONS YOU WON" << endl;
                    flag = 1;
                    break;
                }
            }
            break;
        }
        case 4:
        {
            if (grid[1][0] != " ")
            {
                cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                goto label;
            }
            else
            {
                grid[1][0] = "X";
                cout << "SUCCESSFULLY FILLED" << endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << grid[i][j];
                    }
                    cout << endl;
                }
                if ((grid[0][0] == "X" && grid[2][0] == "X") || (grid[1][1] == "X" && grid[2][1] == "X"))
                {
                    cout << "CONGRATULATIONS YOU WON" << endl;
                    flag = 1;
                    break;
                }
            }
            break;
        }
        case 5:
        {
            if (grid[1][1] != " ")
            {
                cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                goto label;
            }
            else
            {
                grid[1][1] = "X";
                cout << "SUCCESSFULLY FILLED" << endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << grid[i][j];
                    }
                    cout << endl;
                }
                if ((grid[1][0] == "X" && grid[1][2] == "X") || (grid[0][1] == "X" && grid[2][1] == "X") || (grid[0][0] == "X" && grid[2][2] == "X") || (grid[0][2] == "X" && grid[2][0] == "X"))
                {
                    cout << "CONGRATULATIONS YOU WON" << endl;
                    flag = 1;
                    break;
                }
            }
            break;
        }
        case 6:
        {
            if (grid[1][2] != " ")
            {
                cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                goto label;
            }
            else
            {
                grid[1][2] = "X";
                cout << "SUCCESSFULLY FILLED" << endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << grid[i][j];
                    }
                    cout << endl;
                }
                if ((grid[1][0] == "X" && grid[1][1] == "X") || (grid[0][2] == "X" && grid[2][2] == "X"))
                {
                    cout << "CONGRATULATIONS YOU WON" << endl;
                    flag = 1;
                    break;
                }
            }
            break;
        }
        case 7:
        {
            if (grid[2][0] != " ")
            {
                cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                goto label;
            }
            else
            {
                grid[2][0] = "X";
                cout << "SUCCESSFULLY FILLED" << endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << grid[i][j];
                    }
                    cout << endl;
                }
                if ((grid[0][0] == "X" && grid[1][0] == "X") || (grid[2][1] == "X" && grid[2][2] == "X") || (grid[1][1] == "X" && grid[0][2] == "X"))
                {
                    cout << "CONGRATULATIONS YOU WON" << endl;
                    flag = 1;
                    break;
                }
            }
            break;
        }
        case 8:
        {
            if (grid[2][1] != " ")
            {
                cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                goto label;
            }
            else
            {
                grid[2][1] = "X";
                cout << "SUCCESSFULLY FILLED" << endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << grid[i][j];
                    }
                    cout << endl;
                }
                if ((grid[0][1] == "X" && grid[1][1] == "X") || (grid[2][0] == "X" && grid[2][2] == "X"))
                {
                    cout << "CONGRATULATIONS YOU WON" << endl;
                    flag = 1;
                    break;
                }
            }
            break;
        }
        case 9:
        {
            if (grid[2][2] != " ")
            {
                cout << "SLOT ALREADY FILLED TRY AGAIN " << endl;
                goto label;
            }
            else
            {
                grid[2][2] = "X";
                cout << "SUCCESSFULLY FILLED" << endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << grid[i][j];
                    }
                    cout << endl;
                }
                if ((grid[0][0] == "X" && grid[1][1] == "X") || (grid[2][0] == "X" && grid[2][1] == "X") || (grid[0][2] == "X" && grid[1][2] == "X"))
                {
                    cout << "CONGRATULATIONS YOU WON" << endl;
                    flag = 1;
                    break;
                }
            }
            break;
        }
        default:
        {
            cout << "ENTER VALID CHOICE" << endl;
            goto label;
        }
            if (flag == 1)
                return;
        }
        if (flag == 1)
            return;
        if (n >= 1)
        {
        bot:
            int random_number = generateRandomNumber();
            while (1)
            {
                if (random_number == 1)
                {
                    if (grid[0][0] == " ")
                    {
                        grid[0][0] = "O";
                        cout << "SUCCESSFULLY FILLED BY BOT" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                cout << grid[i][j];
                            }
                            cout << endl;
                        }
                        if ((grid[0][1] == "O" && grid[0][2] == "O") || (grid[1][1] == "O" && grid[2][2] == "O") || (grid[1][0] == "O" && grid[2][0] == "O"))
                        {
                            cout << "WELL PLAYED BUT THE BOT WON" << endl;
                            flag = 1;
                            break;
                        }
                        break;
                    }
                    else
                        goto bot;
                }
                else if (random_number == 2)
                {
                    if (grid[0][1] == " ")
                    {
                        grid[0][1] = "O";
                        cout << "SUCCESSFULLY FILLED BY BOT" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                cout << grid[i][j];
                            }
                            cout << endl;
                        }
                        if ((grid[0][0] == "O" && grid[0][2] == "O") || (grid[1][1] == "O" && grid[2][1] == "O"))
                        {
                            cout << "WELL PLAYED BUT THE BOT WON" << endl;
                            flag = 1;
                            break;
                        }
                        break;
                    }
                    else
                        goto bot;
                }
                else if (random_number == 3)
                {
                    if (grid[0][2] == " ")
                    {
                        grid[0][2] = "O";
                        cout << "SUCCESSFULLY FILLED BY BOT" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                cout << grid[i][j];
                            }
                            cout << endl;
                        }
                        if ((grid[0][1] == "O" && grid[0][0] == "O") || (grid[1][2] == "O" && grid[2][2] == "O") || (grid[1][1] == "O" && grid[2][0] == "O"))
                        {
                            cout << "WELL PLAYED BUT THE BOT WON" << endl;
                            flag = 1;
                            break;
                        }
                        break;
                    }
                    else
                        goto bot;
                }
                else if (random_number == 4)
                {
                    if (grid[1][0] == " ")
                    {
                        grid[1][0] = "O";
                        cout << "SUCCESSFULLY FILLED BY BOT" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                cout << grid[i][j];
                            }
                            cout << endl;
                        }
                        if ((grid[0][0] == "O" && grid[2][0] == "O") || (grid[1][1] == "O" && grid[2][1] == "O"))
                        {
                            cout << "WELL PLAYED BUT THE BOT WON" << endl;
                            flag = 1;
                            break;
                        }
                        break;
                    }
                    else
                        goto bot;
                }
                else if (random_number == 5)
                {
                    if (grid[1][1] == " ")
                    {
                        grid[1][1] = "O";
                        cout << "SUCCESSFULLY FILLED BY BOT" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                cout << grid[i][j];
                            }
                            cout << endl;
                        }
                        if ((grid[1][0] == "O" && grid[1][2] == "O") || (grid[0][1] == "O" && grid[2][1] == "O") || (grid[0][0] == "O" && grid[2][2] == "O") || (grid[0][2] == "O" && grid[2][0] == "O"))
                        {
                            cout << "WELL PLAYED BUT THE BOT WON" << endl;
                            flag = 1;
                            break;
                        }
                        break;
                    }
                    else
                        goto bot;
                }
                else if (random_number == 6)
                {
                    if (grid[1][2] == " ")
                    {
                        grid[1][2] = "O";
                        cout << "SUCCESSFULLY FILLED BY BOT" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                cout << grid[i][j];
                            }
                            cout << endl;
                        }
                        if ((grid[1][0] == "O" && grid[1][1] == "O") || (grid[0][2] == "O" && grid[2][2] == "O"))
                        {
                            cout << "WELL PLAYED BUT THE BOT WON" << endl;
                            flag = 1;
                            break;
                        }
                        break;
                    }
                    else
                        goto bot;
                }
                else if (random_number == 7)
                {
                    if (grid[2][0] == " ")
                    {
                        grid[2][0] = "O";
                        cout << "SUCCESSFULLY FILLED BY BOT" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                cout << grid[i][j];
                            }
                            cout << endl;
                        }
                        if ((grid[0][0] == "O" && grid[1][0] == "O") || (grid[2][1] == "O" && grid[2][2] == "O") || (grid[1][1] == "O" && grid[0][2] == "O"))
                        {
                            cout << "WELL PLAYED BUT THE BOT WON" << endl;
                            flag = 1;
                            break;
                        }
                        break;
                    }
                    else
                        goto bot;
                }
                else if (random_number == 8)
                {
                    if (grid[2][1] == " ")
                    {
                        grid[2][1] = "O";
                        cout << "SUCCESSFULLY FILLED BY BOT" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                cout << grid[i][j];
                            }
                            cout << endl;
                        }
                        if ((grid[0][1] == "O" && grid[1][1] == "O") || (grid[2][0] == "O" && grid[2][2] == "O"))
                        {
                            cout << "WELL PLAYED BUT THE BOT WON" << endl;
                            flag = 1;
                            break;
                        }
                        break;
                    }
                    else
                        goto bot;
                }
                else if (random_number == 9)
                {
                    if (grid[2][2] == " ")
                    {
                        grid[2][2] = "O";
                        cout << "SUCCESSFULLY FILLED BY BOT" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                cout << grid[i][j];
                            }
                            cout << endl;
                        }
                        if ((grid[0][0] == "O" && grid[1][1] == "O") || (grid[2][0] == "O" && grid[2][1] == "O") || (grid[0][2] == "O" && grid[1][2] == "O"))
                        {
                            cout << "WELL PLAYED BUT THE BOT WON" << endl;
                            flag = 1;
                            break;
                        }
                        break;
                    }
                    else
                        goto bot;
                }
                if (flag == 1)
                    return;
            }
            if (flag == 1)
                return;
        }
        if (flag == 1)
            return;
    }
}

signed main()
{
    cout << "ENTER THE NUMBER ACCORDING TO THE MODE YOU WANNA PLAY" << endl;
    cout << "PRESS 1 FOR 2 PLAYER MODE" << endl;
    cout << "PRESS 2 FOR PLAYING AGAINST BOT" << endl;
    int n;
    cin >> n;
    if (n == 1)
        TwoPlayersMode();
    else if (n == 2)
        vsBOT();
    else
        cout << "INVALID CHOICE" << endl;
    return 0;
}