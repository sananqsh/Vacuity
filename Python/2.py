print("when done with entering the list, enter any non numeral expression:")
try:
	heights = []
	while True:
		heights.append(int(input()))
except:
	tallest_to_rights = []
	for i in range(len(heights) - 1):
		print(i)
		right_max = max(heights[i+1:len(heights)]) 
		tallest_to_rights.append(right_max)

	tallest_to_rights.append(-1)		
	print(tallest_to_rights)