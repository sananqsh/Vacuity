def middle_idx(word):
	return int((len(word) - 1) / 2)

def middle_char(word):
	middle_idx = int((len(word) - 1) / 2)
	return word[middle_idx]

def without(word, idx):
	return word[0:idx] + word[idx+1:len(word)]

def swap(word):
	if len(word) == 0:
		return word
	
	# x = word - word[i]

while True:
	plain = input("Enter a word to have it ciphered: ")
	print(plain)

	# midchar = middle_char(plain)
	# print(midchar)

	# x = without(plain, middle_idx(plain))
	# print(x)

	y = middle_char(plain) + without(plain, middle_idx(plain))
	print(y)

	# plain = swap(plain)
	# print(plain)