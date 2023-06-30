print("Number of floors is : 21")
user_floor= input("Presh the number:")
current_floor = 0 
difference = int(user_floor) - int(current_floor)
if difference == 0:

 print("Opening the door:")
 print("Enter the floor number:")
 user_floor=int(input())
 i=1
 while i<user_floor:
  print(str(i) +  " Lift is moving up")
  i = i+1
 print("Reached at " + str(user_floor) + " floor:\n door opning:")

elif difference>0:
 
 print("lift is moving up")
elif difference<0 :
 print("lift is moving down")


