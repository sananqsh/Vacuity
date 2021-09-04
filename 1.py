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

def encrypt(word):
	print(word)	#dbg

	if len(word) <= 2:
		return word;

	mid_idx = middle_idx(word)
	mid_char = middle_char(plain)		
	
	word = mid_char + encrypt(word[0:mid_idx]) + encrypt(word[mid_idx+1:len(word)])


while True:
	plain = input("Enter a word to have it ciphered: ")
	print(plain)

	# while 

	print(encrypt(plain))