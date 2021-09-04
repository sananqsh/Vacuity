def middle_idx(word):
	return int((len(word) - 1) / 2)

def encrypt(word):
	if len(word) <= 2:
		return word;

	mid_idx = middle_idx(word)
	mid_char = word[middle_idx(word)]
	
	word = mid_char + encrypt(word[0:mid_idx]) + encrypt(word[mid_idx+1:len(word)])

	return word

plain = input("Enter a word to have it ciphered: ")

cipher = encrypt(plain)
print("Cipher text: " + cipher)