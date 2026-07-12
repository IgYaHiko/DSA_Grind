def arrayRankTransform(num: list[int]) -> list[int]:
    temp = num.copy()
    temp.sort()
    dic = {}
    rank = 1
    for i in range(len(temp)):
        if temp[i] not in dic:
           dic[temp[i]] = rank
           rank += 1
    for i in range(len(num)):
        num[i] = dic[num[i]]
    return num

print(arrayRankTransform([40,10,20,30]))