#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* spell[], size_t spell_len, const char* dic[], size_t dic_len) {
    int answer = 2;
    
    //dic 내의 모든 단어 접근
    for(size_t i = 0; i < dic_len; i++)
    {
        //dic 내에 있는 단어 word 에 할당
        const char* word = dic[i];
        //알파벳 26자리 : 각 자리 방문 시, true로 변경
        bool found[26] = {false};
        //단어 조건 충족 여부 확인용
        bool isValid = true; 
        
        //spell 내에 있는 ch 모두 접근
        for(size_t j = 0; j < spell_len; j++)
        {
            char ch = spell[j][0];
            
            //word 안에 ch가 없다면 break
            if(strchr(word, ch)==NULL)
            {
                isValid = false;
                break; 
            }
            
             //만약 해당 ch가 이미 이전에 발견되었다면 해당 word도 유효하지 않음을 표시하고 break
            if(found[ch - 'a'])
            {
                isValid = false;
                break;
            }
            // 그 외의 경우는 true
            found[ch - 'a'] = true;
        }
        //만약 spell 내의 모든 값을 비교해보고 여전히 isValid 값이 true라면 즉시 return 1
        if(isValid){
            answer = 1;
            return answer;
        }
    }

    return answer;
}