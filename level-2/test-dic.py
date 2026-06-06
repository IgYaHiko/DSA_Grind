def test(m, n):
    li = [1, 2, 3, 4, 5, 0, 0, 0]
    li2 = [2, 5, 6]

    new = []
    new.extend(li[:m])
    new.extend(li2[:n])

    return new

print(test(3, 3))