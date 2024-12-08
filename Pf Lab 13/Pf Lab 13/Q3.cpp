//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    char puzzle[10][10];
//    string word;
//
//    cout << "Welcome to the CROSSWORD PUZZLE !!!" << endl;
//    cout << "Enter the desired letters of this crossword puzzle: " << endl;
//
//
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            cin >> puzzle[i][j];
//        }
//    }
//
//    cout << "Enter a word you want to search: " << endl;
//
//    cin >> word;
//
//    for (int k = 0; k < 10; k++)
//    {
//        for (int l = 0; l < 10; l++)
//        {
//            if (puzzle[k][l] == word[0])
//            {
//                for (int m = 0; m < word.length(); m++)
//                {
//                    if (puzzle[k][l + m] == word[m])
//                    {
//                        if (m == word.length() - 1)
//                        {
//                            cout << "Word Found at the location " << k << ", " << l << " in the right direction." << endl;
//                        }
//                    }
//                    else
//                    {
//                        break;
//                    }
//                }
//            }
//        }
//    }
//
//    for (int n = 0; n < 10; n++)
//    {
//        for (int o = 0; o < 10; o++)
//        {
//            if (puzzle[n][o] == word[0])
//            {
//                for (int p = 0; p < word.length(); p++)
//                {
//                    if (puzzle[n][o - p] == word[p])
//                    {
//                        if (p == word.length() - 1)
//                        {
//                            cout << "Word Found at the location " << n << ", " << o << " in the left direction." << endl;
//                        }
//                    }
//                    else
//                    {
//                        break;
//                    }
//                }
//            }
//        }
//    }
//
//    for (int q = 0; q < 10; q++)
//    {
//        for (int r = 0; r < 10; r++)
//        {
//            if (puzzle[q][r] == word[0])
//            {
//                for (int s = 0; s < word.length(); s++)
//                {
//                    if (puzzle[q + s][r] == word[s])
//                    {
//                        if (s == word.length() - 1)
//                        {
//                            cout << "Word Found at the location " << q << ", " << r << " in the downward direction." << endl;
//                        }
//                    }
//                    else
//                    {
//                        break;
//                    }
//                }
//            }
//        }
//    }
//
//    for (int t = 0; t < 10; t++)
//    {
//        for (int u = 0; u < 10; u++)
//        {
//            if (puzzle[t][u] == word[0])
//            {
//                for (int v = 0; v < word.length(); v++)
//                {
//                    if (puzzle[t - v][u] == word[v])
//                    {
//                        if (v == word.length() - 1)
//                        {
//                            cout << "Word Found at the location " << t << ", " << u << " in the upward direction." << endl;
//                        }
//                    }
//                    else
//                    {
//                        break;
//                    }
//                }
//            }
//        }
//    }
//
//    return 0;
//}
//
//
