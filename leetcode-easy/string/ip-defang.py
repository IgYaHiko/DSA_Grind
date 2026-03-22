# 1108. Defanging an IP Address
""" Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"
 """
def ip_defang(ip: str) -> str:
    emp = ""
    for ch in ip:
        if ch == ".":
            emp += "[.]"
        else:
            emp += ch
    print(f"Output: {emp}")
    return emp

def main():
    your_ip = input("Enter Your IP: Dummy format (1.1.1.1): ")
    ip_defang(
        ip=your_ip
    )

main()