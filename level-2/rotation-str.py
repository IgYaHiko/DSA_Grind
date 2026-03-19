def rote_str(sen, target):
    
    if len(sen) != len(target):
        print("No Rotation no equal")
        return
    
    temp = sen + sen
    if target in temp:
        print("Rotated")
    else:
        print("Not")


def main():
    sen = input("Enter Original Sen: ")
    target = input("Target: ")
    rote_str(
        sen=sen,
        target=target
    )

main()