dic = {}
n = "aabacbebebe"

for i in range(len(n)):
    dic[n[i]] = dic.get(n[i], 0) + 1

    dic[n[i]] -= 1
print(dic)