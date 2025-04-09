#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main()
{
    string word;
    cin >> word;
    
    vector<int> alph_list(26, 0);
    for(int i = 0; i < word.length(); i++)
    {
       alph_list[(int)word[i] - 97]++; 
    }
    for(int i = 0; i < alph_list.size(); i++)
    {
        cout << alph_list[i] << " ";
    }
}