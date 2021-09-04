import sys

def remove(string):
    return string.replace(" ", "")

if len(sys.argv) == 1:
	print("Usage: python	3.py	table_file")

with open(sys.argv[1]) as matrix:
	reader = remove(matrix.read())
	print(reader)

	key = input("word: ")

	#test:
	if key in reader:
		print("yes!")