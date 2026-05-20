class BankAccount:
    def __init__(self,name,balance=0):
            self.name = name
            self.balance = balance 
      
    def deposite(self, amount):
          self.balance += amount
          print(f"Account Holder: {self.name} balance is {self.balance}")
    
    def  withDrawal(self,amount):
            if amount > self.balance:
               print(f"{amount} is insufficient")
            else: 
               self.balance -= amount
               print(f"Account Holder: {self.name} balance is {self.balance}")
         
          
    def check_balance(self):
         print(f"Name of Account Holder: {self.name}")
         print(f"Remaining Balance of Account Holder: {self.balance}")

a1 = BankAccount(name="Subhro", balance=0)
a1.check_balance()
deposite_amout = int(input("Enter Your Amount You want to deposite: "))
a1.deposite(amount=deposite_amout)
withdrawal_amout = int(input("Enter Your amount you want to withdrawal: "))
a1.withDrawal(amount=withdrawal_amout)
a1.check_balance()