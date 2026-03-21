def shuffle_srt(s: str, indi=list[int]) -> str:
    res = [""] * len(s)
    for i in range(len(s)):
        target = indi[i]
        res[target] = s[i]
        print(f"Visual representation: {res}")
    return "   ".join(res)


def main():
    s = input("Enter Your String: ")
    i = list(map(int, input("Enter Indicies: ")))
    print(f"Output: {shuffle_srt(s=s, indi=i)}")

main()