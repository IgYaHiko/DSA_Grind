def hour(n:list[int], sp: int) -> int:
    h = 0
    for i in range(len(n)):
        h += n[i] // sp
        if n[i] % sp != 0:
           h += 1
    return h

print(hour(n=[3,6,7,11],sp=3))
