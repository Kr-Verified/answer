def solution(myStr):
    answer =  []
    temp = ''
    for i in myStr:
        if (i=='a' or i=='b' or i=='c'):
            if temp:
                answer.append(temp)
                temp = ''
        else:
            temp+=i
    answer.append(temp)
    if answer==[""]:
        answer[0] = "EMPTY";
    return answer

print(solution("baconlettucetomato"))