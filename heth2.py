# Python program to print positive Numbers in a List 

# list of numbers 
list1 = [1,-8,97,-25,5,-8]
num = 0
print(list1)
# using while loop	 
while(num < len(list1)): 
	
	# checking condition 
	if list1[num] >= 0: 
		print(list1[num], end = " ") 
	
	# increment num 
	num += 1
