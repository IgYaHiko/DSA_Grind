l1 = [[0,2],[5,10],[13,23],[24,25]]
l2 = [[1,5],[8,12],[15,24],[25,26]]
l3 = []
l4 = []
res = []
for i in range(len(l1)):
    l3.append(l1[i][0])
for j in range(len(l2)):
    l4.append(l2[j][0])
for a,b in zip(l3, l4):
    res.append([a,b])
print(res)
    